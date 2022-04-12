#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,x,y;
    float r;
    char c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c>>x>>y;
        if(c=='Q' or c=='r'){
            cout<<min(x,y)<<"\n";
        }
        else if(c=='k'){
            if((x*y)%2>0){
                cout<<(x*y)/2+1<<"\n";
            }
            else cout<<(x*y)/2<<"\n";
        }
        else if(c=='K'){
            if(x%2>0)
                x++;
            if(y%2>0)
                y++;
            cout<<(x*y)/4<<"\n";
        }
    }
    return 0;
}
