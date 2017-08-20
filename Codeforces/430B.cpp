#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;

int rs[111], n, k, x;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

    cin >> n >> k >> x;
    for(int i = 0; i < n; ++i)
        cin >> rs[i];
    
    int mx = 0;
    for(int i = 0; i < n; ++i)
    {
        if(rs[i] != x)
            continue;
        int l, r, color = x, cnt = 0, ccnt = 0;
        l = r = i;
        
        while(true)
        {
            ccnt = 0;
            color = rs[l];
            for(; l >= 0 && rs[l] == color; --l)
                ++ccnt;            
            for(; r < n && rs[r] == color; ++r)
                ++ccnt;
            if(ccnt < 3)
                break;
            cnt += ccnt;
            if(l == 0 || r == n)
                break;
        }
        mx = max(cnt - 1, mx);
    }
    
    cout << mx << "\n";
    
    return 0;
}