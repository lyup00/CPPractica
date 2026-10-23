#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int t;
        string a;
        cin >> t >> a;;

        int largo = 0;
        int largomasalto = 0;

        for(int e=0; e<t; e++){
            if(a[e] == '0'){
                largo++;
            }else if(largomasalto < largo){
                largomasalto = largo;
                largo = 0;
            }
        }
        cout << largo <<endl;
    }
    return 0;
}