#include <bits/stdc++.h>
using namespace std;

int main(){
    int veces;
    cin>>veces;

    for(int a=0; a < veces; ++a){
        int n;
        cin>>n;

        vector<int> milista;
        for(int b=1; b < 3*n+1; ++b){
            milista.push_back(b);
        }

        vector<string> miout;
        for(int c=0; c < n; ++c){
            miout.push_back(to_string(milista[c]));
            miout.push_back(" ");
            miout.push_back(to_string(milista[milista.size() - 2]));
            miout.push_back(" ");
            miout.push_back(to_string(milista.back()));
            miout.push_back(" ");
            milista.pop_back();
            milista.pop_back();
        }
        milista.pop_back();
 
        for(string a: miout){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}