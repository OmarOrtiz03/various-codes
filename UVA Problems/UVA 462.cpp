/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool S,H,D,C;
char mejor;
int contadors,contadorh,contadord,contadorc,acumulador,mayor;
string arre[14];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    while(1){
        S=false;
        H=false;
        D=false;
        C=false;
        contadors=0;
        contadorh=0;
        contadord=0;
        contadorc=0;
        acumulador=0;
        mayor=0;
        for(int i=0;i<13;i++){
            cin>>arre[i];
            if(arre[i][1]=='S')
                contadors++;
            else if(arre[i][1]=='H')
                contadorh++;
            else if(arre[i][1]=='D')
                contadord++;
            else if(arre[i][1]=='C')
                contadorc++;
            if(arre[i][0]=='A'){
                acumulador+=4;
                if(arre[i][1]=='S')
                    S=true;
                else if(arre[i][1]=='H')
                    H=true;
                else if(arre[i][1]=='D')
                    D=true;
                else if(arre[i][1]=='C')
                    C=true;
            }
            else if(arre[i][0]=='K')
                acumulador+=3;
            else if(arre[i][0]=='Q')
                acumulador+=2;
            else if(arre[i][0]=='J')
                acumulador++;
        }
        if(contadors<=2){
            if(contadors<=1)
                acumulador+=2;
            else acumulador++;
        }
        if(contadorh<=2){
            if(contadorh<=1)
                acumulador+=2;
            else acumulador++;
        }
        if(contadord<=2){
            if(contadord<=1)
                acumulador+=2;
            else acumulador++;
        }
        if(contadorc<=2){
            if(contadorc<=1)
                acumulador+=2;
            else acumulador++;
        }
        if(contadors>mayor){
            mayor=contadors;
            mejor='S';
        }
        if(contadorh>mayor){
            mayor=contadorh;
            mejor='H';
        }
        if(contadord>mayor){
            mayor=contadord;
            mejor='D';
        }
        if(contadorc>mayor){
            mayor=contadorc;
            mejor='C';
        }
        for(int i=0;i<13;i++){
            if(arre[i][0]=='K'){
                if(arre[i][1]=='S'){
                    if(contadors<=1) acumulador--;
                    else S=true;
                }
                else if(arre[i][1]=='H'){
                    if(contadorh<=1) acumulador--;
                    else H=true;
                }
                else if(arre[i][1]=='D'){
                    if(contadord<=1) acumulador--;
                    else D=true;
                }
                else if(arre[i][1]=='C'){
                    if(contadorc<=1) acumulador--;
                    else C=true;
                }
            }
            else if(arre[i][0]=='Q'){
                if(arre[i][1]=='S'){
                    if(contadors<=2) acumulador--;
                    else S=true;
                }
                else if(arre[i][1]=='H'){
                    if(contadorh<=2) acumulador--;
                    else H=true;
                }
                else if(arre[i][1]=='D'){
                    if(contadord<=2) acumulador--;
                    else D=true;
                }
                else if(arre[i][1]=='C'){
                    if(contadorc<=2) acumulador--;
                    else C=true;
                }
            }
            else if(arre[i][0]=='J'){
                if(arre[i][1]=='S')
                    if(contadors<=3) acumulador--;
                else if(arre[i][1]=='H')
                    if(contadorh<=3) acumulador--;
                else if(arre[i][1]=='D')
                    if(contadord<=3) acumulador--;
                else if(arre[i][1]=='C')
                    if(contadorc<=3) acumulador--;
            }
        }
        if(acumulador<14){
            cout<<"PASS\n";
        }
        else if(acumulador>=14){
            if(S==true and H==true and D==true and C==true and acumulador>=16) cout<<"BID NO-TRUMP\n";
            else cout<<"BID "<<mejor<<"\n";
        }
    }

    return 0;
}
