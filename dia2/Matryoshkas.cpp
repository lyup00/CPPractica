#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

        vector <int> cosas;
        int anterior = *lista.begin(); 
        
        for (int y: cantidad){
            while (anterior < y - 1){
                cosas.push_back(0);
                anterior++;
            }
            
            auto rango = lista.equal_range(y);
            int cuantos = distance(rango.first, rango.second);
            cosas.push_back(cuantos);
            
            anterior = y;
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
        cout<<tengolistas<<"\n";
    };
    return 0;
}
