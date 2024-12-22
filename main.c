#include <stdio.h>
#include <stdlib.h>

// Definição das constantes de conversão de tamanho de dados
#define BIT_TO_BYTE 0.125
#define KB_TO_BYTE 1024
#define MB_TO_BYTE (1024 * 1024)
#define GB_TO_BYTE (1024 * 1024 * 1024)
#define TB_TO_BYTE (1024LL * 1024 * 1024 * 1024)

// Enumeração para as unidades de tamanho de dados
typedef enum {
    BIT,
    BYTE,
    KILOBYTE,
    MEGABYTE,
    GIGABYTE,
    TERABYTE
} UnidadeDeDados;

typedef enum{
    LITRO,
    MILILITRO,
    METROSCUBICOS
}UnidadeDeVolume;

void exibirMenu();

int main() {
    int escolha;

    do {
        exibirMenu();

        printf("Escolha uma opcao (0 para sair): \n");
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
    printf("==========================================\n");
}

