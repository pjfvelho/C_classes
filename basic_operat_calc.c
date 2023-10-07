#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro! Não é possível dividir por zero.\n");
        return 0;
    }
    return a / b;
}

int main() {
    while (1) {
        printf("Escolha uma operação:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        
        char escolha;
        scanf(" %c", &escolha);
        
        if (escolha == '5') {
            printf("Encerrando o programa.\n");
            break;
        }
        
        float num1, num2;
        
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        
        float resultado;
        
        switch (escolha) {
            case '1':
                resultado = soma(num1, num2);
                break;
            case '2':
                resultado = subtracao(num1, num2);
                break;
            case '3':
                resultado = multiplicacao(num1, num2);
                break;
            case '4':
                resultado = divisao(num1, num2);
                break;
            default:
                printf("Opção inválida!\n");
                continue;
        }
        
        printf("Resultado: %.2f\n\n", resultado);
    }
    
    return 0;
}
