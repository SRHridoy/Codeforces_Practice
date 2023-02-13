//       *Author: Md Sohanur Rahman Hridoy* ​

//In the name of ALLAH, the Most Gracious, the Most Merciful...

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")

#include"bits/stdc++.h"
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define endl              '\n'
#define all(v)            v.begin(),v.end()
#define fo(i, n)          for(int i = 0; i < n; i++)
#define Fo(i,k,n)         for(int i = k;k<n?i<n:i>n;k<n?i++:i--)
using namespace std;
int r[110];
void solve(){
    int n;
    cin >> n;
	for(int i = 1; i <= n;i++){
		cin >> r[i];
	}
	for(int i = 1; i <= n;i++){
		for(int j = i + 1; j <= n;j++){
			int res = r[i] + r[j];
			for(int k = 1; k <= n;k++){
				if(r[k] == res){
					cout << k << " " << j << " " << i << endl;
					return;
				}
			}
		}
	}
	cout << -1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    t = 1;
    //int cs = 1;
    //cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}