#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string cartas;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,cartas);
        cout<<"Case "<<i+1<<": "<<cartas[96]<<cartas[97]<<"\n";
    }
    return 0;
}