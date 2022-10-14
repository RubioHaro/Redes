//Diga cual seria la salida del siguiente programa:
#include <stdio.h>
#include <stdlib.h>

main()
{
    char seronoser[][12] = {"informacion", "supervision","informacion", "no numerada"};

    char cadena[] = {
        0x00, 0xa0, 0x24, 0x14, 0x49, 0x4a, 0x00, 0xa0, /* ..$.IJ.. */
        0x24, 0x14, 0x49, 0xaa, 0x00, 0x04, 0xf0, 0xf0, /* $.I..... */
        0x0a, 0x3b, 0x00, 0x00, 0xff, 0xef, 0x16, 0x0c, /* .;...... */
        0x00, 0x00, 0x28, 0x00, 0x28, 0x00, 0x0c, 0x0f, /* ..(.(... */
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, /*          */
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, /*          */
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, /*          */
        0x20, 0x20, 0x20, 0x20                          /*      */
    };

    //char cadena[] = {0x48, 0x6f, 0x6c, 0x61, 0x20, 0x00};
    unsigned char i = 128;

    union un
    {
        unsigned char caracteres[2];
        unsigned short int entero;
    } x, *aux;

    printf("%s \n", cadena);

    for (i = 128; i > 0; i = i >> 1)
    {

        if (i & cadena[0])
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    cadena[0] = 0xff;
    cadena[0] = cadena[0] ^ 15;
    for (i = 128; i > 0; i = i >> 1)
    {
        if (i & cadena[0])
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    printf("%02x \n", (unsigned char)cadena[0]);

    printf("%02X es %s \n", (unsigned char)cadena[16], seronoser[cadena[16] & 3]);

    x.caracteres[0] = 0;
    x.caracteres[1] = 1;

    printf("x.caracteres[0]= %02X x.caracteres[1]= %02X x.entero= %04X x.entero= %d \n", x.caracteres[0], x.caracteres[1], x.entero, x.entero);

    x.caracteres[0] = 1;
    x.caracteres[1] = 0;

    printf("x.caracteres[0]= %02X x.caracteres[1]= %02X x.entero= %04X x.entero= %d \n", x.caracteres[0], x.caracteres[1], x.entero, x.entero);

    aux = (union un *)cadena;

    printf("aux.caracteres[0]= %02X aux.caracteres[1]= %02X aux.entero= %04X \n", aux->caracteres[0], aux->caracteres[1], aux->entero);

    system("pause");
}