#include <bits/stdc++.h>
using namespace std;

struct position{
  int x;
  int y;
  int t;
};

bool comp(position a, position b){
    return (a.t < b.t);
}

bool validate(position ori, position dest){
    return (abs(ori.x - dest.x)+abs(ori.y - dest.y) <= (dest.t-ori.t));
}

int dp[2000];

int main(){
    int n, aux, c = 0;
    vector<position> pos;
    position a;
    a.x = 6;
    a.y = 6;
    a.t = 0;
    pos.push_back(a);
    cin>>n;
    aux = n;
    memset(dp, 0, sizeof dp);
    while(aux--){
        cin>>a.x>>a.y>>a.t;
        pos.push_back(a);
    }
    sort(pos.begin(),pos.end(),comp);
    a = pos[0];
    for (int i = 0; i < n; i++) {
        if(validate(a,pos[i+1])){ 
            c++;
            a = pos[i+1];
        }
    }
    cout<<c;
    return 0;
}