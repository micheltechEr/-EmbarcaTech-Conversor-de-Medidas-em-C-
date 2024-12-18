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
    printf("1. Unidades de comprimento (metro, centímetro, milímetro)\n");
    printf("2. Unidades de massa (quilograma, grama, tonelada)\n");
    printf("3. Unidades de volume (litro, mililitro, metros cúbicos)\n");
    printf("4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin)\n");
    printf("5. Unidades de velocidade (km/h, m/s, mph)\n");
    printf("6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)");
    printf("7. Unidades de área (metro quadrado, centímetro quadrado)\n"); 
    printf("8. Unidades de tempo (segundos, minutos, horas)\n");
    printf("9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
    printf("0. Sair\n");
    printf("=================================\n");
}

