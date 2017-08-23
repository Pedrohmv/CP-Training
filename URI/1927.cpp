using namespace std;
#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
#define endl '\n'
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int dx[] = {1,0,-1,0,0};
int dy[] = {0,1,0,-1,0};
int dp[21][21][1001];
int trufa[21][21][1001];

bool validate(int x, int y, int t){
    return (x < 0 || y < 0 || x > 20 || y > 20 || t > 1000) ? 0 : 1;
}

int solve(int x, int y, int t){
    if(dp[x][y][t]==-1){
        int ans = 0;
        for (int i = 0; i < 5; i++) {
            if(validate(x+dx[i],y+dy[i],t+1)){
                ans = max(ans,solve(x+dx[i],y+dy[i],t+1));
            }
        }
        ans += trufa[x][y][t];
        dp[x][y][t] = ans;
        return ans;
    }
    else{
        return dp[x][y][t];
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
    cout<<solve(6,6,0);
    return 0;
}