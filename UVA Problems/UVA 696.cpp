#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x,y,z,ban=0,r;


    while(cin>>x>>y, x!=0 or y!=0){
        ban=0,
        r=0;
        if(x==0 or y==0) cout<<0<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<"\n";
        else if(x==1 or y==1){
            cout<<max(x,y)<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<"\n";
        }
        else if(x==2 or y==2){
            z=max(x,y);
            for(int i=0;i<z;i++){
                if(ban>3){
                    ban=0;
                }
                if(ban==0 or ban==1){
                    r+=2;
                    ban++;
                }
                else if(ban==2 or ban==3){
                    ban++;
                }
            }
            cout<<r<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<"\n";
        }
        else cout<<(x*y+1)/2<<" knights may be placed on a "<<x<<" row "<<y<<" column board."<<"\n";
    }
    return 0;
}
