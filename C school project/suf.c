#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int iguales(char *pcad, char *busc, int ind){
    for (int i = strlen(busc) - 1; i >= 0; i--){
        if (pcad[ind-i] != busc[strlen(busc)-1-i])
            return 0;
    }
    return 1;
}

int main()
{
    char atri[100], pcadena[100] = "", busc[100];
    FILE *entrada, *salida, *atributo, *buscado;

    entrada = fopen("entrada.txt", "r");
    atributo = fopen("atributo.txt", "r");
    buscado = fopen("buscado.txt", "r");
    salida = fopen("salida.txt", "w");

    fscanf(atributo, "%s", atri);
    fscanf(buscado, "%s", busc);

    if(entrada != NULL && salida != NULL && atributo != NULL && !strcmp(atri, "CS")){
        char auxiliar;
        while((auxiliar=getc(entrada)) != EOF){
            strncat(pcadena, &auxiliar, 1);
        }
        int semejanzas = 0;
        for (int i = 0; i < strlen(pcadena); i++){
            if (pcadena[i] == '\n'){
                fprintf(salida,"\nel numero de semejanzas en la linea son: ");
                fprintf(salida, "\t%d", semejanzas);
                semejanzas = 0;
            }
            else if (iguales(pcadena, busc, i) && (pcadena[i + 1] == ' ' || i == strlen(pcadena) - 2))
                semejanzas++;
            fprintf(salida, "%c", pcadena[i]);
        }
        printf("se realizo con exito");
    }
    else printf("no se logro encontrar el archivo o el el atributo es incorrecto");
    fclose(entrada);
    fclose(salida);
    fclose(buscado);
    fclose(atributo);
    return 0;
}
