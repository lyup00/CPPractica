#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string t = "oxxoxxoxxoxxo";
    int posicion = t.find(s);
    
    if(posicion != -1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}