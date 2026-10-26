#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int t;
        string a;
        cin >> t >> a;

        vector<string> mivector;
        for(int e=0; e<t; e++){
            if(a[e] != 'a' || a[e] != 'e'){
                
            }
            mivector.pushback
            if(a == 0){
                largo++;
            }else{
                largomasalto = max(largomasalto, largo);
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