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
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    int dem = 0, cnt = 0;
    fo(i,s2.size()){
        if(s2[i]==' '){
            cnt++;
        }fo(j,s1.size()){
            if(s1[j]==s2[i] && s1[j]!=0 && s2[i]!=' '){
                dem++;
                s1[j]=0;
                s2[i]=1;
            }
        }
    }
    if(dem==s2.size()-cnt) cout << "YES" << endl;
    else cout << "NO" << endl;
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