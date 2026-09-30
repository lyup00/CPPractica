#include <bits/stdc++.h>
using namespace std;

int main(){
    int veces;
    cin>>veces;

    string mistr = "codeforces";

    for(int a=0; a<veces; ++a){
        string s;
        cin>>s;

        int suma = 0;
        for(int b=0; b<mistr.size(); ++b){
            if(s[b] != mistr[b]){
                suma += 1;
            }
        }
        cout<<suma<<endl;
    }
    return 0;
}