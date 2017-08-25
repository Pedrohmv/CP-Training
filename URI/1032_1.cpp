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
	int n, it;
    vi numbers;
    while(cin>>n && n){
    	it = 0;
    	for(int i = 1; i <= n; ++i) numbers.pb(i);
	    for(int i = 0; i < n; i++){
	    	it = (it%(int)numbers.size() + primes[i] - 1)%(int)numbers.size();
	        numbers.erase(numbers.begin() + it);
	    }
	    cout<<numbers[0]<<endl;
	    numbers.clear();
    }   

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
	return 0;
}
