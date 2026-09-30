#include <bits/stdc++.h>
using namespace std;

int main() {
    int veces;
    cin>>veces;

    for (int i=0; i<veces; ++i){
        int largo, numrs;
        cin>>largo;

        multiset <int> lista;
        for (int k=0; k<largo; ++k){
            cin>>numrs;
            lista.insert(numrs);
        };
        set <int> cantidad(lista.begin(), lista.end());

        set <int> numeros;
        for (int e=*lista.begin(); e<=*lista.rbegin(); ++e){
            numeros.insert(e);
        };

        vector <int> cosas;
        for (int f: numeros){
            cosas.push_back(lista.count(f));
        }

        int tengolistas = 0;
        while (largo>0){
            int tengo = 0;
            bool empezo = false;
            for (int p=0; p<cosas.size(); ++p){
                if (cosas[p] != 0){
                    cosas[p] -= 1;
                    tengo++;
                    empezo = true;
                }
                else if (cosas[p] == 0){
                    if (empezo){
                    break;
                    }
                };
            };
            largo -= tengo;
            tengolistas += 1;
        };
        cout<<tengolistas<<endl;
    };
    return 0;
};