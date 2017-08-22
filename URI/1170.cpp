#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, c;
    float w;
    cin>>t;
    while(t--){
        cin>>w;
        c = 0;
        while(w>1){
            w /= 2;
            c++;
        }
        cout<<c<<" dias\n";
    }
    return 0;
}