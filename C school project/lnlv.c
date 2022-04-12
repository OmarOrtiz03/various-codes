#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void Cambio(char *cadenita, char old, char news){
	int i;
    for(i=0;i<strlen(cadenita);i++){
        if(cadenita[i]==old){
            cadenita[i]=news;
        }
    }
}
int main()
{
    char pcadena[100]="";
    char auxiliar;
    char vieja;
    char nuevas;
    char atri[5];
    FILE *entrada,*salida,*cambio,*nueva,*atributo;
    entrada=fopen("cadenas.txt","r");
    cambio=fopen("arch1.txt","r");
    nueva=fopen("arch2.txt","r");
    atributo=fopen("atributo.txt","r");
    salida=fopen("respuesta.txt","w");
    fscanf(atributo, "%s", atri);
    if (entrada != NULL && cambio != NULL && nueva != NULL && !strcmp(atri, "-S")){
        while((auxiliar=getc(entrada)) != EOF){
            strncat(pcadena, &auxiliar, 1);
        }
        vieja=getc(cambio);
        nuevas=getc(nueva);
        Cambio(pcadena,vieja,nuevas);
        fprintf(salida,"%s",pcadena);
        printf("Se logro con exito el cambio!!!!!");
    }
    else
        printf("No se logro encontrar algun archivo o el atributo es incorrecto.");
    fclose(entrada);
    fclose(salida);
    fclose(cambio);
    fclose(nueva);
    return 0;
}
