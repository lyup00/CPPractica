#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, m, id, bucket, collidin = 0;
    cin>>n>>m;

    multiset<int> miset;

    for(int a=0; a<n; ++a){
        cin>>id;
        bucket = id % m;
        miset.insert(bucket);
    }

    set <int> veces;
    for(int e=*miset.begin(); e<=*miset.rbegin(); ++e){
        veces.insert(e);
    };

    for(int i=*veces.begin(); i<=*veces.rbegin(); ++i){
        if(miset.count(i) != 1){
            collidin += miset.count(i);
        }
    }

    cout<<collidin<<endl;
    return 0;
}