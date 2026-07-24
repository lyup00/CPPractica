#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, m, id, bucket, collidin = 0LL;
    cin>>n>>m;

    multiset<ll> miset;

    for(ll a=0; a<n; ++a){
        cin>>id;
        bucket = id % m;
        miset.insert(bucket);
    }

    set <ll> veces(miset.begin(), miset.end());
    for(ll i: veces){
        if(miset.count(i) != 1){
            collidin += miset.count(i);
        }
    }
    cout<<collidin<<endl;
    return 0;
}