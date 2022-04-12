#include <iostream>

using namespace std;
int ban=0,n,m,po,ban2=0,ban3=0,mat[10000][10000],actualx,actualy;
void abajo(){
    for(int i=0;i<n;i++){
        if(mat[actualy][actualx]==0){
            mat[actualy][actualx]=po;
            actualy++;
            po--;
        }
        else{
            break;
        }
    }
    actualy--;
    actualx--;
    ban=1;
}
void izquierda(){
    for(int i=0;i<n;i++){
        if(mat[actualy][actualx]==0){
            mat[actualy][actualx]=po;
            actualx--;
            if(actualx<0){
                actualx=0;
                ban2=1;
            }
            po--;
        }
        else{
            break;
        }
    }
    if(ban2==0) actualx++;
    else ban2=0;
    actualy--;
    ban=2;
}
void arriba(){
    for(int i=0;i<n;i++){
        if(mat[actualy][actualx]==0){
            mat[actualy][actualx]=po;
            actualy--;
            if(actualy<0){
                actualy=0;
                ban3=1;
            }
            po--;
        }
        else{
            break;
        }
    }
    if(ban3==0) actualy++;
    else ban3=0;
    actualx++;
    ban=3;
}
void derecha(){
    for(int i=0;i<n;i++){
        if(mat[actualy][actualx]==0){
            mat[actualy][actualx]=po;
            actualx++;
            po--;
        }
        else{
            break;
        }
    }
    actualy++;
    actualx--;
    ban=0;
}
int main()
{
    while(cin>>n>>m, n!=0 and m!=0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=0;
            }
        }
        ban=0;
        actualy=0;
        actualx=n-1;
        po=n*n;
        while(po>0){
            if(ban==0)
                abajo();
            else if(ban==1)
                izquierda();
            else if(ban==2)
                arriba();
            else if(ban==3)
                derecha();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==m){
                    cout<<"Line = "<<n-i<<", column "<<j+1<<".\n";
                }
            }
        }
    }
    return 0;
}