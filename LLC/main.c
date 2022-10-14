#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int llc(char trama[], int longitud, char resultado[]);
void printByte(char c);
int htoi(char *hex, char *bin);
int invertirBits(char *bin, char *newBin);

int main(int argc, char const *argv[])
{

    char trama[60] = {
        0x00, 0xa0, 0x24, 0x14, 0x49, 0x4a, 0x00, 0xa0, /* ..$.IJ.. */
        0x24, 0x14, 0x49, 0xaa, 0x00, 0x04, 0xf0, 0xf0, /* $.I..... */
        0x0a, 0x3b, 0x00, 0x00, 0xff, 0xef, 0x16, 0x0c, /* .;...... */
        0x00, 0x00, 0x28, 0x00, 0x28, 0x00, 0x0c, 0x0f, /* ..(.(... */
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, /*          */
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, /*          */
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, /*          */
        0x20, 0x20, 0x20, 0x20                          /*      */
    };

    //printf("HolaMundo");
    char resultado[100];
    //printf("%x", ch & 0xff);
    //printf("t:");
    //printByte(trama[0]);
    //printf("t: %.2x", trama[1] & 0xff);
    llc(trama, sizeof(trama), resultado);

    if (llc(trama, sizeof(trama), resultado))
        printf("%s", resultado);

    return 0;
}

void printByte(char c)
{
    printf("%.2x ", c & 0xff);
}

int llc(char trama[], int longitud, char resultado[])
{
    //char *resultado;
    // printf("LLC: Analizando Trama\n");
    // printf("Trama: Dir: Destino:");
    // for (int i = 0; i < 6; i++)
    // {
    //     printByte(trama[i]);
    // }
    // printf("\nTrama: Dir: Origen:");
    // for (int i = 6; i < 12; i++)
    // {
    //     printByte(trama[i]);
    // }

    // printf("\nTrama: Longitud:");
    // for (int i = 12; i < 14; i++)
    // {
    //     printByte(trama[i]);
    // }
    // printf("\nTrama: SAP origen:");
    // printByte(trama[14]);
    // printf("\nTrama: SAP destino:");
    // printByte(trama[15]);

    // char str[50];
    // sprintf(str, "%.2x", trama[16] & 0xff);

    // printf("\n");
    // printf("Trama: Control: %s", str);
    // printf("\n");

    // char bin[50] = "";
    // htoi(str, bin);
    // printf("Trama: Control (bits): %s\n", bin);

    // char *invBin = malloc(sizeof(bin));
    // invertirBits(bin, invBin);
    // printf("Trama: Control (bits inv): %s\n", invBin);

    // if (invBin[0] == '0')
    //     resultado = "informacion";
    // else if (invBin[0] == '1' && invBin[1] == '0')
    //     resultado = "supervision";
    // else if (invBin[0] == '1' && invBin[1] == '1')
    //     resultado = "no numerada";
    // else
    //     resultado = "trama no valida";

    // printf("%s", resultado);

    char tipo_trama[][12] = {"informacion", "supervision", "informacion", "no numerada"};
    resultado = tipo_trama[trama[16] & 3];
    printf("%s", resultado);
    

    return 0;
}

int invertirBits(char *bin, char *newBin)
{
    int len = sizeof(bin) / sizeof(bin[0]);
    for (int i = 0; i < len; i++)
        newBin[i] = bin[len - i - 1];
}

int htoi(char *hex, char *bin)
{
    int i = 0;

    for (i = 0; hex[i] != '\0'; i++)
    {
        switch (hex[i])
        {
        case '0':
            strcat(bin, "0000");
            break;
        case '1':
            strcat(bin, "0001");
            break;
        case '2':
            strcat(bin, "0010");
            break;
        case '3':
            strcat(bin, "0011");
            break;
        case '4':
            strcat(bin, "0100");
            break;
        case '5':
            strcat(bin, "0101");
            break;
        case '6':
            strcat(bin, "0110");
            break;
        case '7':
            strcat(bin, "0111");
            break;
        case '8':
            strcat(bin, "1000");
            break;
        case '9':
            strcat(bin, "1001");
            break;
        case 'a':
        case 'A':
            strcat(bin, "1010");
            break;
        case 'b':
        case 'B':
            strcat(bin, "1011");
            break;
        case 'c':
        case 'C':
            strcat(bin, "1100");
            break;
        case 'd':
        case 'D':
            strcat(bin, "1101");
            break;
        case 'e':
        case 'E':
            strcat(bin, "1110");
            break;
        case 'f':
        case 'F':
            strcat(bin, "1111");
            break;
        default:
            printf("Invalid hexadecimal input.");
        }
    }

    //printf("\nHexademial number = %s\n", hex);
    //printf("Binary number = %s\n", bin);

    return 0;
}
