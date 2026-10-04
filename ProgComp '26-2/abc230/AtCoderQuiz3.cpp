#include <bits/stdc++.h>
using namespace std;

int main(){
    int contest; 
    cin>>contest;

    if (contest >= 42){
        cout<<"AGC"<<'0'<<contest+1<<endl;
    }
    else if(42 > contest && contest >=10){
        cout<<"AGC"<<'0'<<contest<<endl;
    }
    else{
        cout<<"AGC"<<"00"<<contest<<endl;
    }
    return 0;
}