/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int n;
string actual="+x",pedir;
string calcular(string a,string b){
    if(a=="+x" and b=="+y")
        return "+y";
    else if(a=="+x" and b=="-y")
        return "-y";
    else if(a=="+x" and b=="+z")
        return "+z";
    else if(a=="+x" and b=="-z")
        return "-z";
    else if(a=="-x" and b=="+y")
        return "-y";
    else if(a=="-x" and b=="-y")
        return "+y";
    else if(a=="-x" and b=="+z")
        return "-z";
    else if(a=="-x" and b=="-z")
        return "+z";
    else if(a=="+y" and b=="+z")
        return "+y";
    else if(a=="+y" and b=="-z")
        return "+y";
    else if(a=="+y" and b=="-y")
        return "+x";
    else if(a=="+y" and b=="+y")
        return "-x";
    else if(a=="-y" and b=="+z")
        return "-y";
    else if(a=="-y" and b=="-z")
        return "-y";
    else if(a=="-y" and b=="+y")
        return "+x";
    else if(a=="-y" and b=="-y")
        return "-x";
    else if(a=="+z" and b=="+z")
        return "-x";
    else if(a=="+z" and b=="-z")
        return "+x";
    else if(a=="+z" and b=="+y")
        return "+z";
    else if(a=="+z" and b=="-y")
        return "+z";
    else if(a=="-z" and b=="-z")
        return "-x";
    else if(a=="-z" and b=="+z")
        return "+x";
    else if(a=="-z" and b=="+y")
        return "-z";
    else if(a=="+z" and b=="-y")
        return "-z";
    
    
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    while(cin>>n,n!=0){
        actual="+x";
        for(int i=1;i<n;i++){
            cin>>pedir;
            if(pedir!="No")
                actual=calcular(actual,pedir);
        }
        cout<<actual<<"\n";
    }
    return 0;
}
