using namespace std;
#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
#define endl '\n'
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;


bool excluOR(unsigned long int a, unsigned long int b){
    return 1<<a ? !b : b;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	unsigned long int x, y, r;
	while(cin>>x>>y){
	    r = x ^ y;
	    cout<<r<<endl;
	}

    return 0;
}