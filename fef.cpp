#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e4+7;
vector<ll> s, d;
//bool st[N];
//bool cmp(int a,int b)
//{
//	return a>b; 
//}
int main() {
    int m, n;
    cin >> m;
    s.resize(m);
    for (int i = 0; i < m; ++i) cin >> s[i];
    
    cin >> n;
    d.resize(n);
    for (int i = 0; i < n; ++i) cin >> d[i];
    ll ans=0;
    sort(s.begin(), s.end());
    sort(d.begin(), d.end());
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(s[i]>=d[i]){
    			ans+=s[i];
			}
		}
	}
    cout << ans << endl;
    return 0;
}

//3 5 7 6
//2 2 6

