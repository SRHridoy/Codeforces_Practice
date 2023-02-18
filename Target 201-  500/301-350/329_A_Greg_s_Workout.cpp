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

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    fo(i,n) cin >> v[i];
    int chest = 0, bicep = 0, back = 0;
    for(int i = 0;i < n; i+=3){
        chest+=v[i];
    }for(int i = 1; i < n; i+=3){
        bicep+=v[i];
    }for(int i = 2; i < n; i+=3){
        back+=v[i];
    }
    if(chest >=bicep and chest >= back){
        cout << "chest" << endl;
    }else if(bicep >= chest and bicep >= back){
        cout << "biceps" << endl;
    }else{
        cout << "back" << endl;
    }
    //cout << chest << " " << bicep << " " << back << endl;
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