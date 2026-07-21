#include <bits/stdc++.h>
using namespace std;

int main() {
    int veces;
    cin>>veces;

    for (int i=0; i<veces; ++i){
        int largo, numrs;
        cin>>largo;

        vector <int> lista;
        for (int k=0; k<largo; ++k){
            cin>>numrs;
            lista.push_back(numrs);
        };

        multiset <int> cantidad;
        for (int n: lista){
            cantidad.insert(n);
        };

        int mayor=0;
        for (int f: lista){
            int hola = cantidad.count(f);
            if (hola > mayor){
                mayor = hola;
            };
        };
        cout<<mayor<<endl;
    };
    return 0;
}