#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int, int> mimapa;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        mimapa[a]++;
    }

    priority_queue<int> mivector;
    for(auto par : mimapa){
        mivector.push(par.second);
    }
    
    int cuantas = 0;
    while(mivector.size() >= 3){
        int x = mivector.top(); mivector.pop();
        int y = mivector.top(); mivector.pop();
        int z = mivector.top(); mivector.pop();

        cuantas++;
        
        x--; if(x > 0) mivector.push(x);
        y--; if(y > 0) mivector.push(y);
        z--; if(z > 0) mivector.push(z);
    }
    cout << cuantas << endl;
    return 0;
}