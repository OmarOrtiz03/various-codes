#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//void salto(char *cadenita){
  //  for(int i=0;i<strlen(cadenita);i++){
    //    if(cadenita[i]=='d'){
      //      if(cadenita[i+1]>=48 && cadenita[i+1]<=57){
        //        cadenita[i]="\n";
          //  }
       // }
   // }
//}
int main()
{
    char pcadena[100]="";
    char atri[3]="";
    char auxiliar;
    FILE *entrada,*salida,*atributo;
    entrada=fopen("entrada.txt","r");
    atributo=fopen("atributo.txt","r");
    salida=fopen("salida.txt","w");
    fscanf(atributo,"%s",atri);
    if (entrada != NULL && atributo != NULL && !strcmp(atri,"IL")){
        while((auxiliar=getc(entrada)) != EOF){
            strncat(pcadena, &auxiliar, 1);
        }
        for(int i=0;i<strlen(pcadena);i++){
        if(pcadena[i]=='d'){
            if(pcadena[i+1]>=48 && pcadena[i+1]<=57){
                pcadena[i]=' ';
                pcadena[i+1]='\n';
                }
            }
        }
        fprintf(salida,"%s",pcadena);
        printf("Se logro con exito el cambio!!!!!");
    }
    else printf("No se logro encontrar algun archivo.");
    fclose(entrada);
    fclose(salida);
    fclose(atributo);
    return 0;
}
