#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,0,-1,0,0};
int dy[] = {0,1,0,-1,0};
int dp[21][21][1001];
int trufa[21][21][1001];

bool validate(int x, int y){
    return (x < 0 || y < 0 || x > 20 || y > 20) ? 0 : 1;
}

int solve(int x, int y, int t){
    if(dp[x][y][t]==-1){
        int ans = 0;
        for (int i = 0; i < 5; i++) {
            if(validate(x+dx[i],y+dy[i])){
                ans = max(ans,solve(x+dx[i],y+dy[i],t+1));
            }
        }
        ans += trufa[x][y][t];
        dp[x][y][t] = ans;
    }
    else{
        dp[x][y][t] += trufa[x][y][t];
    }
}

int main(){
    int n,x,y,t;
    cin>>n;
    memset(trufa, 0, sizeof trufa);
    memset(dp, -1, sizeof dp);
    while(n--){
        cin>>x>>y>>t;
        trufa[x][y][t]++;
    }
    dp[6][6][0] = 0;
    solve(6,6,0);
    for (auto i : dp) {
        if(i) cout<<i<<" \n";
    }
    return 0;
}