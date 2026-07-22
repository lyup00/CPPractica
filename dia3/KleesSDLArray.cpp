#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int a=0; a<t; ++a){
        int n, k;
        cin>>n>>k;

        vector <int> lista;
        for(int b=k; b<k+n; ++b){
            lista.push_back(b);
            cout<<"item lista"<<b<<endl;
        }

        int suma = k;
        int otro = 0;
        int it = 1;
        while(it < lista.size() - 1){
            if(abs(suma - otro) < suma + lista[it]){
                otro += lista.back();
                lista.pop_back();
                cout<<"otroRARO"<<otro<<endl;
            }
            else if(suma < ){
                suma += lista[it];
                cout<<"sumaIN"<<suma<<endl;
                it++;
                cout<<"itIN"<<it<<endl;
            }
            else{
                suma -= lista.back();
                cout<<"sumaOUT"<<suma<<endl;
                cout<<"itOUT"<<it<<endl;
                lista.pop_back();
                if(lista.empty()){
                    break;
                }
            }
        }
        cout<<it<<endl;
        }
    
    return 0;
}