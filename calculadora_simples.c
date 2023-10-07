#include <stdio.h>

// Função para realizar a adição
float adicao(float a, float b) {
    return a + b;
}

// Função para realizar a subtração
float subtracao(float a, float b) {
    return a - b;
}

// Função para realizar a multiplicação
float multiplicacao(float a, float b) {
    return a * b;
}

// Função para realizar a divisão
float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro! Não é possível dividir por zero.\n");
        return 0;
    }
    return a / b;
}

int main() {
    while (1) {
        printf("Opções:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        
        char escolha;
        scanf(" %c", &escolha);
        
        if (escolha == '5') {
            printf("Calculadora encerrada.\n");
            break;
        }
        
        float num1, num2, resultado;
        
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        
        switch (escolha) {
            case '1':
                resultado = adicao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case '2':
                resultado = subtracao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case '3':
                resultado = multiplicacao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case '4':
                resultado = divisao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }
    
    return 0;
}
