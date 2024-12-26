#include <stdio.h>
#include <stdlib.h>

// Definição das constantes de conversão de tamanho de dados
#define BIT_TO_BYTE 0.125
#define KB_TO_BYTE 1024
#define MB_TO_BYTE (1024 * 1024)
#define GB_TO_BYTE (1024 * 1024 * 1024)
#define TB_TO_BYTE (1024LL * 1024 * 1024 * 1024)

//Enumeração para as unidades de comprimento
typedef enum{
    METRO,
    CENTIMETROS,
    MILIMETROS
}UnidadeDeComprimento;

//Enumeração para as unidades de massa
typedef enum{
	QUILOGRAMA,
	GRAMA,
	TONELADA
}UnidadeDeMassa;

//Enumeração para as unidades de volume
typedef enum{
    LITRO,
    MILILITRO,
    METROSCUBICOS
}UnidadeDeVolume;

//Enumeração para as unidades de temperatura
typedef enum{
	CELSIUS,
	FAHRENHEIT,
	KELVIN
}UnidadeDeTemperatura;

//Enumeração para as unidades de velocidade
typedef enum{
	KILOMETROS_POR_HORA,
	METROS_POR_SEGUNDO,
	MILHAS_POR_HORA
}UnidadeDeVelocidade;

//Enumeração para as unidades de potência
typedef enum{
	WATTS,
	QUILOWATTS,
	CAVALOS_VAPOR
}UnidadeDePotencia;

//Enumeração para as unidades de área
typedef enum{
	METROS_QUADRADOS,
	CENTIMETROS_QUADRADOS
}UnidadeDeArea;

//Enumeração para as unidades de tempo
typedef enum{
	SEGUNDOS,
	MINUTOS,
	HORAS
}UnidadeDeTempo;

// Enumeração para as unidades de tamanho de dados
typedef enum {
    BIT,
    BYTE,
    KILOBYTE,
    MEGABYTE,
    GIGABYTE,
    TERABYTE
} UnidadeDeDados;

void exibirMenu();
double converterComprimento(double valor, UnidadeDeComprimento inicial, UnidadeDeComprimento final);
const char* obterUnidadeComprimento(UnidadeDeComprimento unidade);
double converterMassa(double valor, UnidadeDeMassa inicial, UnidadeDeMassa final);
const char* obterUnidadeMassa(UnidadeDeMassa unidade);
double converterVolume(double valor, int inicial, int final);
const char* obterUnidadeVolume(UnidadeDeVolume unidade);
double converterTemperatura(double valor, UnidadeDeTemperatura inicial, UnidadeDeTemperatura final);
const char* obterUnidadeTemperatura(UnidadeDeTemperatura unidade);
double converterVelocidade(double valor, UnidadeDeVelocidade inicial, UnidadeDeVelocidade final);
const char* obterUnidadeVelocidade(UnidadeDeVelocidade unidade);
double converterPotencia(double valor, UnidadeDePotencia inicial, UnidadeDePotencia final);
const char* obterUnidadePotencia(UnidadeDePotencia unidade);
double converterArea(double valor, UnidadeDeArea inicial, UnidadeDeArea final);
const char* obterUnidadeArea(UnidadeDeArea unidade);
double converterTempo(double valor, UnidadeDeTempo inicial, UnidadeDeTempo final);
const char* obterUnidadeTempo(UnidadeDeTempo unidade);
double converterDados(double valor, UnidadeDeDados inicial, UnidadeDeDados final);
const char* obterUnidadeDados(UnidadeDeDados unidade);

int main() {
    int escolha;

    do {
        exibirMenu();

        printf("Escolha uma opcao (0 para sair): \n");
        scanf("%d", &escolha);

        double valor, resultado;
        int inicial, final;

        switch (escolha)
        {
        case 1: //Conversão de comprimento
           printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - metro, 1 - centimetro, 2 - milimetro): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - metro, 1 - centimetro, 2 - milimetro): \n");
            scanf("%d", &final);
            resultado = converterComprimento(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeComprimento(inicial), resultado, obterUnidadeComprimento(final));
            break;
        case 2: //Conversão de massa
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - quilograma, 1 - grama, 2 - tonelada): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - quilograma, 1 - grama, 2 - tonelada): \n");
            scanf("%d", &final);
            resultado = converterMassa(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeMassa(inicial), resultado, obterUnidadeMassa(final));
            break;
        case 3: //Conversão de volume
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - litro, 1 - mililitro, 2 - metro cúbico): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - litro, 1 - mililitro, 2 - metro cúbico): \n");
            scanf("%d", &final);
            resultado = converterVolume(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeVolume(inicial), resultado, obterUnidadeVolume(final));
            break;
        case 4: //Conversão de temperatura
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - celsius, 1 - fahrenheint, 2 - kelvin): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - celsius, 1 - fahrenheint, 2 - kelvin): \n");
            scanf("%d", &final);
            resultado = converterTemperatura(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeTemperatura(inicial), resultado, obterUnidadeTemperatura(final));
            break;
        case 5: //Conversão de velocidade
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - km/h, 1 - m/s, 2 - mph): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - km/h, 1 - m/s, 2 - mph): \n");
            scanf("%d", &final);
            resultado = converterVelocidade(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeVelocidade(inicial), resultado, obterUnidadeVelocidade(final));
            break;
        case 6: //Conversão de potência
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - watts, 1 - kilowatts, 2 - cavalos-vapor): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - watts, 1 - kilowatts, 2 - cavalos-vapor): \n");
            scanf("%d", &final);
            resultado = converterPotencia(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadePotencia(inicial), resultado, obterUnidadePotencia(final));
            break;
        case 7: //Conversão de área
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - metros quadrados, 1 - centimetros quadrados): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - metros quadrados, 1 - centimetros quadrados): \n");
            scanf("%d", &final);
            resultado = converterArea(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeArea(inicial), resultado, obterUnidadeArea(final));
            break;
        case 8: //Conversão de tempo
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - segundos, 1 - minutos, 2 - horas): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - segundos, 1 - minutos, 2 - horas): \n");
            scanf("%d", &final);
            resultado = converterTempo(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeTempo(inicial), resultado, obterUnidadeTempo(final));
            break;
        case 9: // Conversão de tamanho de dados
            printf("Digite o valor para ser convertido: \n");
            scanf("%lf", &valor);
            printf("Digite a unidade inicial (0 - bit, 1 - byte, 2 - kilobyte, 3 - megabyte, 4 - gigabyte, 5 - terabyte): \n");
            scanf("%d", &inicial);
            printf("Digite a unidade final   (0 - bit, 1 - byte, 2 - kilobyte, 3 - megabyte, 4 - gigabyte, 5 - terabyte): \n");
            scanf("%d", &final);
            resultado = converterDados(valor, inicial, final);
            if (resultado != -1)
                printf("%.3f %s equivale a %.3f %s\n", valor, obterUnidadeDados(inicial), resultado, obterUnidadeDados(final));
            break;
        default:
            break;
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
    printf("6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
    printf("7. Unidades de área (metro quadrado, centímetro quadrado)\n"); 
    printf("8. Unidades de tempo (segundos, minutos, horas)\n");
    printf("9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
    printf("0. Sair\n");
    printf("=================================\n");
}

// Função para converter o comprimento entre diferentes unidades
double converterComprimento(double valor, UnidadeDeComprimento inicial, UnidadeDeComprimento final) {
    double resultado;

    switch (inicial) {
    case METRO:
        break;
    case CENTIMETROS:
        valor /= 100;
        break;
    case MILIMETROS:
        valor /= 1000;
        break;
    default:
        printf("Unidade inicial invalida.\n");
        return -1;
    }

    switch (final) {
    case METRO:
        resultado = valor;
        break;
    case CENTIMETROS:
        resultado = valor * 100;
        break;
    case MILIMETROS:
        resultado = valor * 1000;
        break;
    default:
        printf("Unidade final invalida.\n");
        return -1;
    }
    
    return resultado;
}

// Função para obter o nome da unidade de comprimento
const char* obterUnidadeComprimento(UnidadeDeComprimento unidade) {
    switch (unidade) {
    case METRO:
        return "metros";
    case CENTIMETROS:
        return "centímetros";
    case MILIMETROS:
        return "milímetros";
    default:
        return "Unidade desconhecida";
    }
}

// Função para converter a massa entre diferentes unidades
double converterMassa(double valor, UnidadeDeMassa inicial, UnidadeDeMassa final) {
    double resultado;

    switch (inicial) {
    case QUILOGRAMA:
        break;
    case GRAMA:
        valor /= 1000;
        break;
    case TONELADA:
        valor *= 1000;
        break;
    default:
        printf("Unidade inicial invalida.\n");
        return -1;
    }

    switch (final) {
    case QUILOGRAMA:
        resultado = valor;
        break;
    case GRAMA:
        resultado = valor * 1000;
        break;
    case TONELADA:
        resultado = valor / 1000;
        break;
    default:
        printf("Unidade final invalida.\n");
        return -1;
    }
    
    return resultado;
}

// Função para obter o nome da unidade de massa
const char* obterUnidadeMassa(UnidadeDeMassa unidade) {
    switch (unidade) {
    case QUILOGRAMA:
        return "quilogramas";
    case GRAMA:
        return "gramas";
    case TONELADA:
        return "toneladas";
    default:
        return "Unidade desconhecida";
    }
}

// Função para converter o volume entre diferentes unidades
double converterVolume(double valor, int inicial, int final) {
    double resultado;

    switch (inicial)
    {
    case 0:
        break;
    case 1:
        valor /= 1000;
        break;
    case 2:
        valor *= 1000;
        break;
    default:
        printf("Unidade inicial inválida.\n");
        return -1;
    }

    switch (final)
    {
    case 0:
        resultado = valor;
        break;
    case 1:
        resultado = valor * 1000;
        break;
    case 2:
        resultado = valor / 1000;
        break;
    default:
        printf("Unidade final inválida.\n");
        return -1;
    }

    return resultado;
}

// Função para obter o nome da unidade de volume
const char* obterUnidadeVolume(UnidadeDeVolume unidade) {
    switch (unidade) {
    case LITRO:
        return "litros";
    case MILILITRO:
        return "mililitros";
    case METROSCUBICOS:
        return "metros cúbicos";
    default:
        return "Unidade desconhecida";
    }
}

// Função para converter temperatura entre diferentes unidades
double converterTemperatura(double valor, UnidadeDeTemperatura inicial, UnidadeDeTemperatura final) {
    double resultado;

    switch (inicial) {
    case CELSIUS:
        valor += 273.15;
        break;
    case FAHRENHEIT:
        valor = (valor - 32) * 5 / 9 + 273.15;
        break;
    case KELVIN:
        break;
    default:
        printf("Unidade inicial invalida.\n");
        return -1;
    }

    switch (final) {
    case CELSIUS:
        resultado = valor - 273.15;
        break;
    case FAHRENHEIT:
        resultado = (valor - 273.15) * 9 / 5 + 32;
        break;
    case KELVIN:
        resultado = valor;
        break;
    default:
        printf("Unidade final invalida.\n");
        return -1;
    }
    
    return resultado;
}

// Função para obter o nome da unidade de temperatura
const char* obterUnidadeTemperatura(UnidadeDeTemperatura unidade) {
    switch (unidade) {
    case CELSIUS:
        return "Celsius";
    case FAHRENHEIT:
        return "Fahrenheit";
    case KELVIN:
        return "Kelvin";
    default:
        return "Unidade desconhecida";
    }
}

// Função para converter a velocidade entre diferentes unidades
double converterVelocidade(double valor, UnidadeDeVelocidade inicial, UnidadeDeVelocidade final) {
    double resultado;
    switch (inicial) {
        case METROS_POR_SEGUNDO:
            break;
        case KILOMETROS_POR_HORA:
            valor /= 3.6; 
            break;
        case MILHAS_POR_HORA:
            valor *= 0.44704; 
            break;
        default:
            printf("Unidade inicial invalida.\n");
            return -1;
    }

    switch (final) {
        case METROS_POR_SEGUNDO:
            resultado = valor;
            break;
        case KILOMETROS_POR_HORA:
            resultado = valor * 3.6;
            break;
        case MILHAS_POR_HORA:
            resultado = valor / 0.44704;
            break;
        default:
            printf("Unidade final invalida.\n");
            return -1;
    }
    
    return resultado;
}

// Função para obter o nome da unidade de velocidade
const char* obterUnidadeVelocidade(UnidadeDeVelocidade unidade) {
    switch (unidade) {
        case METROS_POR_SEGUNDO: 
           return "m/s";
        case KILOMETROS_POR_HORA: 
           return "km/h";
        case MILHAS_POR_HORA: 
           return "mph";
        default: 
           return "unidade desconhecida";
    }
}

// Função para converter a potência entre diferentes unidades
double converterPotencia(double valor, UnidadeDePotencia inicial, UnidadeDePotencia final) {
    double resultado;
    switch (inicial) {
        case WATTS:
            break;
        case QUILOWATTS:
            valor *= 1000;
            break;
        case CAVALOS_VAPOR:
            valor *= 735.5; 
            break;
        default:
            printf("Unidade inicial invalida.\n");
            return -1;
    }

    switch (final) {
        case WATTS:
            resultado = valor;
            break;
        case QUILOWATTS:
            resultado = valor / 1000;
            break;
        case CAVALOS_VAPOR:
            resultado = valor / 735.5;
            break;
        default:
            printf("Unidade final invalida.\n");
            return -1;
    }
    
    return resultado;
}

// Função para obter o nome da unidade de potência
const char* obterUnidadePotencia(UnidadeDePotencia unidade) {
    switch (unidade) {
        case WATTS: 
           return "watts";
        case QUILOWATTS: 
           return "kilowatts";
        case CAVALOS_VAPOR: 
           return "cavalos-vapor";
        default:
           return "unidade desconhecida";
    }
}

// Função para converter a área entre diferentes unidades
double converterArea(double valor, UnidadeDeArea inicial, UnidadeDeArea final) {
    double resultado;
    switch (inicial) {
        case METROS_QUADRADOS:
            break;
        case CENTIMETROS_QUADRADOS:
            valor /= 10000; 
            break;
        default:
            printf("Unidade inicial invalida.\n");
            return -1;
    }

    switch (final) {
        case METROS_QUADRADOS:
            resultado = valor;
            break;
        case CENTIMETROS_QUADRADOS:
            resultado = valor * 10000;
            break;
        default:
            printf("Unidade final invalida.\n");
            return -1;
    }
    
    return resultado;
}

// Função para obter o nome da unidade de área
const char* obterUnidadeArea(UnidadeDeArea unidade) {
    switch (unidade) {
        case METROS_QUADRADOS: 
           return "metros quadrados";
        case CENTIMETROS_QUADRADOS: 
           return "centimetros quadrados";
        default: 
           return "unidade desconhecida";
    }
}
// Função para converter o tempo entre diferentes unidades
double converterTempo(double valor, UnidadeDeTempo inicial, UnidadeDeTempo final) {
    double resultado;
    switch (inicial) {
        case SEGUNDOS:
            break;
        case MINUTOS:
            valor *= 60;
            break;
        case HORAS:
            valor *= 3600; 
            break;
        default:
            printf("Unidade inicial invalida.\n");
            return -1;
    }

    switch (final) {
        case SEGUNDOS:
            resultado = valor;
            break;
        case MINUTOS:
            resultado = valor / 60;
            break;
        case HORAS:
            resultado = valor / 3600;
            break;
        default:
            printf("Unidade final invalida.\n");
            return -1;
    }
    
    return resultado;
}

// Função para obter o nome da unidade de tempo
const char* obterUnidadeTempo(UnidadeDeTempo unidade) {
    switch (unidade) {
        case SEGUNDOS: 
           return "segundos";
        case MINUTOS: 
           return "minutos";
        case HORAS: 
           return "horas";
        default: 
           return "unidade desconhecida";
    }
}

// Função para converter o tamanho de dados entre diferentes unidades
double converterDados(double valor, UnidadeDeDados inicial, UnidadeDeDados final) {
    double resultado;

    switch (inicial)
    {
    case 0:
        valor *= BIT_TO_BYTE;
        break;
    case 1:
        break;
    case 2:
        valor *= KB_TO_BYTE;
        break;
    case 3:
        valor *= MB_TO_BYTE;
        break;
    case 4:
        valor *= GB_TO_BYTE;
        break;
    case 5:
        valor *= TB_TO_BYTE;
        break;
    default:
        printf("Unidade inicial invalida.\n");
        return -1;
    }

    switch (final)
    {
        case 0:
            resultado = valor / BIT_TO_BYTE;
            break;
        case 1:
            resultado = valor;
            break;
        case 2:
            resultado = valor / KB_TO_BYTE;
            break;
        case 3:
            resultado = valor / MB_TO_BYTE;
            break;
        case 4:
            resultado = valor / GB_TO_BYTE;
            break;
        case 5:
            resultado = valor / TB_TO_BYTE;
            break;
        default:
            printf("Unidade final invalida.\n");
            return -1;
    }

    return resultado;
}

// Função para obter o nome da unidade de tamanho de dados
const char* obterUnidadeDados(UnidadeDeDados unidade) {
    switch (unidade) {
    case BIT:
        return "bits";
    case BYTE:
        return "bytes";
    case KILOBYTE:
        return "kilobytes";
    case MEGABYTE:
        return "megabytes";
    case GIGABYTE:
        return "gigabytes";
    case TERABYTE:
        return "terabytes";
    default:
        return "Unidade desconhecida";
    }
}
