#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int t;
        cin >> t;

        
        int cuantas = 0;
        for(int e=0; e<t; e++){
            int a;
            cin >> a;

            for(int i=0; i!=a; i){
            if(a >= 15){
                a - 15;
                cuantas++;
                continue;
            }else if(a >= 10){
                a-10;
                cuantas++;
                continue;
            }else if(a >= 6){
                a-6;
                cuantas++;
                continue;
            }else if(a >= 3){
                a-3;
                cuantas++;
                continue;
            }else if(a >= 1){
                a-1;
                cuantas++;
                continue;
            }
            }
        }
        cout << cuantas <<endl;
        cuantas = 0;
    }
    return 0;
}