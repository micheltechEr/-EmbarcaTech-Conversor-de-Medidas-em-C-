#include <stdio.h>
#include <stdlib.h>

void exibirMenu();

int main() {
    int escolha;

    do {
        exibirMenu();

        printf("Escolha uma opcao (0 para sair): ");
        scanf("%d", &escolha);

        if (escolha != 0) {
            printf('Obrigado por escolher a opcao');
        }

    } while (escolha != 0);

    printf("Obrigado por usar o conversor de unidades!\n");
    return 0;
}

void exibirMenu() {
    printf("\n===== Conversor de Unidades =====\n");
    printf("1. Converter metros para quilometros\n");
    printf("2. Converter graus Celsius para Fahrenheit\n");
    printf("3. Converter quilogramas para libras\n");
    printf("4. Converter litros para mililitros\n");
    printf("0. Sair\n");
    printf("=================================\n");
}

