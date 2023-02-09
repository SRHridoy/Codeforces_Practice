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
    int one = 0, two = 0;
    fo(i,n){
        cin >> v[i];
        if(v[i]==1)one++;
        else two++;
    } 
    if(two == 0){
        cout << 1 << endl;
        return;
    }if(two%2==1){
        cout << -1 << endl;
        return;
    }int cnt = 0;
    fo(i,n-1){
        if(v[i]==2)cnt++;
        if(cnt==(two/2)){
            cout << (i+1) << endl;
            return;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    //t = 1;
    //int cs = 1;
    cin >> t;
    while (t--){
        //cout << "Case-#" << cs <<": ";
        solve();
        //cs++;
    }
}