#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int linea = 0,palabras=0,caras=0;
    char atri[100],pcadena[200],auxiliar;
    FILE *entrada, *salida, *atributo;
    entrada = fopen("entrada.txt", "r");
    atributo = fopen("atributo.txt", "r");
    salida = fopen("salida.txt", "w");
    fscanf(atributo, "%s", atri);
    if(entrada != NULL && atributo != NULL && !strcmp(atri, "-WC")){
        while((auxiliar=getc(entrada)) != EOF){
            strncat(pcadena, &auxiliar,1);
        }
        for(int i=0;i<strlen(pcadena);i++){
            if (pcadena[i] == '\n')
                linea++;
            if(pcadena[i]!=' ' || pcadena[i]!='\n'){
                caras++;
            }
            if(pcadena[i]==' ' || pcadena[i]=='\n'){
                palabras++;
            }
        }
        fprintf(salida,"\n el numero de lineas es: %d \n el numero de cadenas es: %d \n el numero de caracteres totales son: %d",linea,palabras,caras);
        printf("se realizo todo con exito");
    }
    else printf("no se logro encontrar el archivo o el el atributo es incorrecto");
    fclose(entrada);
    fclose(salida);
    fclose(atributo);
    return 0;
}

