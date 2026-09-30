#include <bits/stdc++.h>
using namespace std;

int main(){
    int veces;
    cin>>veces;

    for(int a=0; a<veces; ++a){
        int n;
        cin>>n;

        vector<int> milista;
        int mayor = 0;
        int mayor2 = 0;
        for(int b=0; b<n; ++b){
            int s;
            cin>>s;
            milista.push_back(s);
            if(s > mayor){
                mayor = s;
            }
            else{
                mayor2 = s;
            }
        }

        for(int c: milista){
            if(c == mayor){
                cout<<mayor<<mayor2;
            }
            else{
                cout<<c-mayor;
            }
        cout<<endl;
        }
    }
    return 0;
}