#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    unsigned long long int res;
    cin>>t;
    while(t--){
        cin>>n;
        res = (unsigned long long int)(pow(2,n)-1)/12000;
        cout<<res<<" kg\n";
    }
}