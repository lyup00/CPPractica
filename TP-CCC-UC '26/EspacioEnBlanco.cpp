#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int t;
        cin >> t;

        int largo = 0;
        int largomasalto = 0;

        for(int e=0; e<t; e++){
            int a;
            cin >> a;
            if(a == 0){
                largo++;
            }else if(a == 1 && largomasalto < largo){
                largomasalto = largo;
                largo = 0;
            }
        }
        if(largomasalto < largo){
            largomasalto = largo;
        }
        cout << largomasalto <<endl;
    }
    return 0;
}