#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibirMenu();
void ConversorTemperatura();

int main() {
    int escolha;

    do {
        exibirMenu();

        printf("Escolha uma opcao (0 para sair): ");
        scanf("%d", &escolha);

        if (escolha != 0) {
            printf("Obrigado por escolher a opcao");
        }
        if(escolha == 2){
            ConversorTemperatura();
        }

    } while (escolha != 0);

    printf("Obrigado por usar o conversor de unidades!\n");
    return 0;
}

void exibirMenu() {
    printf("\n======== Conversor de Unidades ===========\n");
    printf("1. Converter metros para quilometros\n");
    printf("2. Conversor de temperatura\n");
    printf("3. Converter quilogramas para libras\n");
    printf("4. Converter litros para mililitros\n");
    printf("0. Sair\n");
    printf("==========================================\n");
}

void ConversorTemperatura(){
    char escalaTemperatura;
    float temperaturaCelsius = 0.0, temperaturaFahrenheit = 0.0, temperaturaKelvin = 0.0;
    float resultadoCelsius = 0.0, resultadoFahrenheit = 0.0, resultadoKelvin = 0.0;

    printf("\n\n========== Escalas de temperatura ========\n");
    printf(" C: de Celsius para Fahrenheit e Kelvin\n");
    printf(" F: de Fahrenheit para Celsius e Kelvin\n");
    printf(" K: de Kelvin para Celsius e Fahrenheit\n");
    printf("Informe a letra para realizar a convresao:\n");
    printf("==========================================\n");
    fflush(stdin); // limpar o buffer
    scanf("%c", &escalaTemperatura);

    switch (escalaTemperatura){
    case 'C':
        printf("Informe a temperatura em graus Celsius: ");
        scanf("%f", &temperaturaCelsius);
        resultadoFahrenheit = temperaturaCelsius*1.8 + 32;
        resultadoKelvin = temperaturaCelsius + 273;

        printf("%.2f C e igual a %.2f F\n", temperaturaCelsius, resultadoFahrenheit);
        printf("%.2f C e igual a %.2f K\n", temperaturaCelsius, resultadoKelvin);
        break;
    case 'F':
        printf("Informe a temperatura em graus Fahrenheit: ");
        scanf("%f", &temperaturaFahrenheit);
        resultadoCelsius = (temperaturaFahrenheit-32)/1.8;
        resultadoKelvin = (temperaturaFahrenheit-32)*(5.0/9.0) + 273;

        printf("%.2f F e igual a %.2f C\n", temperaturaFahrenheit, resultadoCelsius);
        printf("%.2f F e igual a %.2f K\n", temperaturaFahrenheit, resultadoKelvin);
        break;
    case 'K':
        printf("Informe a temperatura em Kelvin: ");
        scanf("%f", &temperaturaKelvin);
        resultadoCelsius = temperaturaKelvin - 273;
        resultadoFahrenheit = (temperaturaKelvin-273)*1.8 + 32;

        printf("%.2f K e igual a %.2f C\n", temperaturaKelvin, resultadoCelsius);
        printf("%.2f K e igual a %.2f F\n", temperaturaKelvin, resultadoFahrenheit);
        break;
    default:
        printf("Escala de temperatura invalida!\n");
        break;
    }
}