#include <bits/stdc++.h>
using namespace std;

int main(){
    int veces;
    cin>>veces;

    for(int z=0; z < veces; ++z){
        vector<int> miset;
        for(int a=0; a < 4; ++a){
            int x;
            cin>>x;
            miset.push_back(x);
        }

        if (count(miset.begin(), miset.end(), miset[0]) == 4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}