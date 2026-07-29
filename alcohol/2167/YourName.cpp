#include <bits/stdc++.h>
using namespace std;

int main(){
    int veces;
    cin>>veces;

    for(int z=0; z < veces; ++z){
        int c;
        cin>>c;

        string a, b;
        cin>>a>>b;

        multiset<char> miset;
        multiset<char> miset2;
        for(int v=0; v < c*2; ++v){
            if(v < c){
                miset.insert(a[v]);
            }
            else{
                miset2.insert(b[v-c]);
            }
        }
        if (miset == miset2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}