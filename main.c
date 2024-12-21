#include <stdio.h>
#include <stdlib.h>

void exibirMenu();

int main() {
    int escolha;
    float valor;
    float resultado;

    do {
        
        printf("Digite o numero desejado\n");
        scanf("%f", &valor);

        exibirMenu();

        printf("Escolha uma opcao (0 para sair): ");
        scanf("%d", &escolha);

        switch (escolha){
            case 1 :{

                printf("\n===== Conversor de quilogramas para gramas =====\n");

                resultado = valor*1000;

                printf("VALOR EM GRAMAS: ");
                printf("%.4f ", resultado);
                printf("gramas\n");

                break;
            }

            case 2 :{
                printf("\n===== Conversor de gramas para quilogramas =====\n");

                resultado = valor/1000;

                printf("VALOR EM QUILOGRAMAS: ");
                printf("%.4f ", resultado);
                printf("quilogramas\n");

                break;
            }

            case 3 :{
                printf("\n===== Conversor de quilogramas para toneladas =====\n");

                resultado = valor/1000;

                printf("VALOR EM TONELADAS: ");
                printf("%.4f ", resultado);
                printf("toneladas\n");

                break;
            }

            case 4 :{
                printf("\n===== Conversor de gramas para toneladas =====\n");

                resultado = valor/1000000;

                printf("VALOR EM TONELADAS: ");
                printf("%.8f ", resultado);
                printf("toneladas\n");

                break;
            }

            case 5 :{
                printf("\n===== Conversor de toneladas para quilogramas =====\n");

                resultado = valor*1000;

                printf("VALOR EM TONELADAS: ");
                printf("%.4f ", resultado);
                printf("quilogramas\n");

                break;
            }

            case 6 :{
                printf("\n===== Conversor de toneladas para gramas =====\n");

                resultado = valor*1000000;

                printf("VALOR EM TONELADAS: ");
                printf("%.4f ", resultado);
                printf("gramas\n");

                break;
            }
        }

    } while (escolha != 0);

    printf("Obrigado por usar o conversor de unidades!\n");
    return 0;
}

void exibirMenu() {
    printf("\n===== Conversor de Unidades =====\n");
    printf("1. Converter quilogramas para gramas\n");
    printf("2. Converter gramas para quilogramas\n");
    printf("3. Converter quilogramas para toneladas\n");
    printf("4. Converter gramas para toneladas\n");
    printf("5. Converter toneladas para quilogramas\n");
    printf("6. Converter toneladas para gramas\n");
    printf("0. Sair\n");
    printf("=================================\n");
}

