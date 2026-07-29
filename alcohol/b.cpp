#include <bits/stdc++.h>
using namespace std;

int main(){
    int veces;
    cin>>veces;

    for(int z=0; z < veces; ++z){
        vector<int> miset;
        for(int a=0; a < 7; ++a){
            int x;
            cin>>x;
            miset.push_back(x);
        }
        sort(miset.begin(), miset.end());

        int suma=0;
        for(int b=0; b < miset.size() - 1; ++b){
            suma += (miset[b]*(-1));
        }
        cout<<suma+miset.back()<<endl;
    }
    return 0;
}