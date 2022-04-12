#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void Mm(char *cadenita){
    for(int i=0;i<strlen(cadenita);i++){
        cadenita[i] = toupper(cadenita[i]);
    }
}
void mM(char *cadenita){
    for(int i=0;i<strlen(cadenita);i++){
        cadenita[i] = tolower(cadenita[i]);
    }
}
int main()
{
    char pcadena[100]="";
    char minus[3]="";
    char auxiliar;
    FILE *entrada,*salida,*cambio;
    entrada=fopen("cadena.txt","r");
    cambio=fopen("mayus.txt","r");
    salida=fopen("respuesta.txt","w");
    if (entrada != NULL && cambio != NULL){
        while((auxiliar=getc(entrada))!=EOF)
            strcat(pcadena,&auxiliar);
        fscanf(cambio,"%s",minus);
        if(strcmp(minus,"Mm")==0){
             Mm(pcadena);
             fprintf(salida,"%s",pcadena);
        }
        else if(strcmp(minus,"mM")==0){
            mM(pcadena);
            fprintf(salida,"%s",pcadena);
        }
        printf("Se logro con exito el cambio!!!!!");
    }
    else printf("No se logro encontrar algun archivo.");
    fclose(entrada);
    fclose(salida);
    fclose(cambio);
    return 0;

}
