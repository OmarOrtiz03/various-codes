#include <bits/stdc++.h>


using namespace std;
void rey(int x,int y){
    if(mat[x][y+1]=='\0')
        mat[x][y+1]='x';
    if(mat[x][y-1]=='\0')
        mat[x][y-1]='x';
    if(mat[x+1][y]=='\0')
        mat[x+1][y]='x';
    if(mat[x-1][y]=='\0')
        mat[x-1][y]='x';
    if(mat[x+1][y+1]=='\0')
        mat[x+1][y+1]='x';
    if(mat[x+1][y-1]=='\0')
        mat[x+1][y-1]='x';
    if(mat[x-1][y+1]=='\0')
        mat[x-1][y+1]='x';
    if(mat[x-1][y-1]=='\0')
        mat[x-1][y-1]='x';
}
void peonmoreno(int x,int y){
    if(mat[x+1][y-1]=='\0')
        mat[x+1][y-1]='x';
    if(mat[x-1][y-1]=='\0')
        mat[x-1][y-1]='x';
}
void peonprivilegiado(int x,int y){
    if(mat[x+1][y+1]=='\0')
        mat[x+1][y+1]='x';
    if(mat[x-1][y+1]=='\0')
        mat[x-1][y+1]='x';
}
void caballo(int x,int y){
    if(mat[x+2][y+1]=='\0')
        mat[x+2][y+1]='x';
    if(mat[x-2][y+1]=='\0')
        mat[x-2][y+1]='x';
    if(mat[x+1][y+2]=='\0')
        mat[x+1][y+2]='x';
    if(mat[x-1][y+2]=='\0')
        mat[x-1][y+2]='x';
    if(mat[x+2][y-1]=='\0')
        mat[x+2][y-1]='x';
    if(mat[x+1][y-2]=='\0')
        mat[x+1][y-2]='x';
    if(mat[x-2][y-1]=='\0')
        mat[x-2][y-1]='x';
    if(mat[x-1][y-2]=='\0')
        mat[x-1][y-2]='x';
}
int main()
{
    char mat[100][100];
    int filas,columnas,valor,actual=0;
    string texto;
    cin>>texto;
    for(int i=0;i<texto.size();i++){
        if(texto[i]=='/'){
            filas++;
            actual=0;
        }
        else if(texto[i]=='p' or texto[i]=='n' or texto[i]=='b' or texto[i]=='r' or texto[i]=='q' or texto[i]=='k' or texto[i]=='P' or texto[i]=='N' or texto[i]=='B' or texto[i]=='R' or texto[i]=='Q' or texto[i]=='K'){
            valor=texto[i-1];
            if(valor>47 and valor<58)
                columnas=valor-48;
            else columnas=0;
            mat[filas][actual+columnas]=texto[i];
            actual=actual+columnas;
            actual++;
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(mat[i][j]=='k' or mat[i][j]=='K')
                rey(i,j);
            else if(mat[i][j]=='q' or mat[i][j]='Q')
                reina(i,j);
            else if(mat[i][j]=='p')
                peonmoreno(i,j);
            else if(mat[i][j]=='P')
                peonprivilegiado(i,j);
            else if(mat[i][j]=='n' or mat[i][j]='N')
                caballo(i,j);
            else if(mat[i][j]=='r' or mat[i][j]='R')
                torre(i,j);
        }
    }

    return 0;
}
