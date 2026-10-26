#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int t;
        string a, b;
        cin >> t >> a >> b;

        bool iguales = true;
        for(int e=0; e<t; e++){
            if(a[e] == 'R' && a[e] != b[e]){
                iguales = false;
            }else if(b[e] == 'R' && b[e] != a[e]){
                iguales = false;
            }
        }
        if(iguales == true){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}