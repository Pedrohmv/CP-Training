using namespace std;
#include <bits/stdc++.h>
#define D(x) cout << #x " = " << (x) << endl
#define endl '\n'
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

bitset<1000001> bs;
vi primes;
ll k = 2;
ll twins[1000001];

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

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	sieve();
	memset(twins, 0, sizeof twins);
	for (unsigned int i = 0; i < primes.size() - 1; ++i){
		if((primes[i+1] - primes[i]) == 2){
			twins[primes[i]] = 1;
			twins[primes[i+1]] = 1;	
		}
	}
	for (unsigned int i = 1; i < primes.size(); ++i) twins[i] += twins[i-1];

	int q, x, y;
	cin>>q;
	while(q){
		cin>>x>>y;
		if(x>y) swap(x,y);
		cout<<twins[y] - twins[--x]<<endl;
		q--;		
	}
	return 0;
}