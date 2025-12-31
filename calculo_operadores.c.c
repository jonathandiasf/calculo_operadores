#include <stdio.h>

int main() {
    int n1, n2, n3;
    
    // Solicita os números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    // ===== OPERADORES ARITMETICOS =====
    int soma = n1 + n2 + n3;
    int subtracao = n1 - n2 - n3;
    int multiplicacao = n1 * n2 * n3;

    // Para divisão, faremos com float para evitar divisão inteira
    float divisao;
    if (n2 != 0 && n3 != 0) {
        divisao = (float)n1 / n2 / n3;
    } else {
        divisao = 0; // apenas para evitar erro
        printf("\nNao e possivel dividir por zero.\n");
    }

    // Exibe os resultados
    printf("\n===== RESULTADOS ARITMETICOS =====\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    // ===== OPERADORES RELACIONAIS =====
    printf("\n===== VERIFICACOES RELACIONAIS =====\n");
    printf("Primeiro numero > segundo numero? %s\n", (n1 > n2) ? "SIM" : "NAO");
    printf("Segundo numero < terceiro numero? %s\n", (n2 < n3) ? "SIM" : "NAO");

    // ===== OPERADORES LOGICOS =====
    printf("\n===== VERIFICACOES LOGICAS =====\n");

    // Verificar se n1 é positivo E n2 é par
    if (n1 > 0 && n2 % 2 == 0) {
        printf("O primeiro numero e positivo E o segundo e par!\n");
    } else {
        printf("A condicao logica nao foi atendida.\n");
    }

    return 0;
}
