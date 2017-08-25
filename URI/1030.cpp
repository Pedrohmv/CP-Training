using namespace std;
#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
#define endl '\n'
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int josephus(int n, int k){
    if(n==1) return 1;
    else return (josephus(n-1,k) + k - 1) % n + 1;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int nc, n, k, i = 1;
	cin>>nc;
	while(nc--){
	    cin>>n>>k;
	    cout<<"Case "<<i++<<": "<<josephus(n,k)<<endl;
	}
    
    return 0;
}