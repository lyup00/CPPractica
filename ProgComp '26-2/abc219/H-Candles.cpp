#include <bits/stdc++.h>
using namespace std;

int main(){
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
            cout << length - cootaka - ogcootaka << endl;
            largototal = largototal + (length - cootaka - ogcootaka);
            cout << largototal << endl;
            ogcootaka = cootaka + ogcootaka;
            cout << ogcootaka << endl;
            cout << largototal << endl;
        }
    }
    cout << largototal << endl;
    return 0;
}