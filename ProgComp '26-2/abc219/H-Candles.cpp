#include <bits/stdc++.h>
using namespace std;

int main(){
    int velas;
    cin >> velas;

    int cootaka = 0;
    int largototal = 0;
    for(int i=0; i<n; i++){
        int coovelas, length;
        cin >> coovelas >> length;

        if (coovelas >= 0){
            largototal = largototal + (length - coovelas);
        }else{
            largototal = largototal + (length + coovelas);
        }
        cootaka = cootaka + coovelas;
    }
    cout << largototal << endl;
    return 0;
}