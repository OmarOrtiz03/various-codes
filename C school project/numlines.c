#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int linea = 2;
    char atri[100];
    FILE *entrada, *salida, *atributo;
    entrada = fopen("entrada.txt", "r");
    atributo = fopen("atributo.txt", "r");
    salida = fopen("salida.txt", "w");
    fscanf(atributo, "%s", atri);
    if(entrada != NULL && atributo != NULL && !strcmp(atri, "-nL")){
        fprintf(salida, "1. ");
        char aux;
        while((aux = getc(entrada)) != EOF){
            if (aux == '\n')
                fprintf(salida, "\n%d. ", linea++);
            else
                fprintf(salida, "%c", aux);
        }
        printf("se realizo todo con exito");
    }
    else printf("no se logro encontrar el archivo o el el atributo es incorrecto");
    fclose(entrada);
    fclose(salida);
    fclose(atributo);
    return 0;
}
