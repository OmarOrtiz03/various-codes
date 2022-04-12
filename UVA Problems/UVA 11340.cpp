#include <bits/stdc++.h>

using namespace std;
float r=0,arre[200];
int k,m;
string cadenas[160002];
char letras[200];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int a=0;a<n;a++){
        r=0;
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>letras[i]>>arre[i];
        }
        cin>>m;
        cin.ignore();
        for(int i=0;i<m;i++){
            getline(cin,cadenas[i]);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<cadenas[i].size();j++){
                for(int l=0;l<k;l++){
                    if(cadenas[i][j]==letras[l])
                        r+=arre[l];
                }
            }
        }
        r=r/100;
        cout<<fixed<<setprecision(2)<<r<<'$'<<"\n";
    }

    return 0;
}
