#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arre[1000000],ban=1,cubeta[1000000];
   while(cin>>n){
        ban=1;
        for(int i=0;i<n;i++){
            cin>>arre[i];
        }
        for(int i=0;i<n-1;i++){
            cubeta[i]=abs(arre[i]-arre[i+1]);
        }
        sort(cubeta,cubeta+n-1);
        for(int i=0;i<n-1;i++){
            if(cubeta[i]!=i+1){
                ban=0;
            }
        }
       if(ban==1){
           cout<<"Jolly"<<"\n";
        }
        else {
           cout<<"Not jolly"<<"\n";
        }
    }
     return 0;
}