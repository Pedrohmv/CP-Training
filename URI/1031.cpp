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
    else return (josephus(n-1,k) + k - 1) % (n-1) + 1;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n, k;
	while(cin>>n && n){
	    k = 1;
	    while(josephus(n,k) != 12) k++;
	    cout<<k<<endl;
	}
	
    return 0;
}