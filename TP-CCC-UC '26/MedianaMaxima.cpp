#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    for(int i=0; i<=(n / 2); i++){
        int a;
        cin >> a;
        if(i == (n / 2)){
            cout << a + k << endl;
        }
    }
    return 0;
}