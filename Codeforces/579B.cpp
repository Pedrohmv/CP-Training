using namespace std;
#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
#define endl '\n'
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int p[1111];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    n *= 2;
    vector<pair<int, pair<int, int> > > v;
    for(int i = 2; i <= n; ++i)
        for(int j = 1; j < i; ++j) {
            cin >> x;
            v.push_back({x, {i, j}});
        }
    sort(v.begin(), v.end()); reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); ++i) {
        if (p[v[i].second.first] == 0 && p[v[i].second.second] == 0) {
            p[v[i].second.first] = v[i].second.second;
            p[v[i].second.second] = v[i].second.first;
        }
    }
    
    for(int i = 1; i <= n; ++i)
        cout << p[i] << " \n"[i==n];
    
    return 0;
}