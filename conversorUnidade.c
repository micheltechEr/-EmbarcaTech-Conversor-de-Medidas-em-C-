#include <stdio.h>
#include <conversorUnidade.h>

void conversorMetros(float valor, int opcao) {
    switch (opcao) {
        case 1: // De metros para outras unidades
            printf("%.2f metros equivalem a %.2f centimetros e %.2f milimetros.\n", 
                   valor, valor * 100, valor * 1000);
            break;
        case 2: // De centímetros para outras unidades
            printf("%.2f centimetros equivalem a %.2f metros e %.2f milimetros.\n", 
                   valor, valor / 100, valor * 10);
            break;
        case 3: // De milímetros para outras unidades
            printf("%.2f milimetros equivalem a %.2f metros e %.2f centimetros.\n", 
                   valor, valor / 1000, valor / 10);
            break;
        default:
            printf("Opção invalida.\n");
            break;
    }
}

int main() {
    float valor;
    int opcao;

    printf("Conversor de unidades de comprimento\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Metros\n");
    printf("2 - Centimetros\n");
    printf("3 - Milimetros\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 3) {
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);
        converterUnidades(valor, opcao);
    } else {
        printf("Opçao invalida. Tente novamente.\n");
    }

    return 0;
}
