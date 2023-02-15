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
    string s; cin >> s;
    int k,ans=0; cin >> k;
    int alp[26];
    for(int i=0; i<26; i++){
        cin >> alp[i];
    }
    for(int i=0; i<s.size(); i++){
        int index = s[i];
        index -= 97;
        ans += ( alp[index]*(i+1) );
    }
    sort(alp,alp+26);
    int start = s.size()+1;
    for(int i=0; i<k; i++){
        ans += alp[25]*start;
        start++;
    }

    cout << ans << endl;
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