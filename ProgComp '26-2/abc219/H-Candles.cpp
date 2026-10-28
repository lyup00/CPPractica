#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int velas;
    cin >> velas;

    int cootaka = 0;
    int ogcootaka = 0;
    int largototal = 0;
    for(int i=0; i<velas; i++){
        int coovelas, length;
        cin >> coovelas >> length;

        if(abs(coovelas) < length){
            cootaka = cootaka + abs(coovelas);
            largototal = largototal + (length - cootaka - ogcootaka);
            ogcootaka = cootaka + ogcootaka;
        }
    }
    cout << largototal << endl;
    return 0;
}