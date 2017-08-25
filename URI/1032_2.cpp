using namespace std;
#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
#define endl '\n'
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

bitset<1000001> bs;
vi primes;
ll k = 2;

void sieve(){
	bs.set();
	bs[0] = 0;
	bs[1] = 0;
	for (; k <= 1000000; ++k)
		if(bs[k]){
			for (ll j = k*k; j <= 1000000; j+=k)
				bs[j] = 0;
			primes.pb(k);
		}
}

int josephus(int n, int k){
    if(n==1) return 1;
    else return (josephus(n-1,k+1) + primes[k] - 1) % (n) + 1;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	sieve();
	int n;
	while(cin>>n && n){
	    cout<<josephus(n,0)<<endl;
	}
	
    return 0;
}