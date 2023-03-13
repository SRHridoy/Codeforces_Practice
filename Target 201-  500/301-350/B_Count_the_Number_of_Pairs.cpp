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
const int N = 26;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    // int diff = 32;
    vector<int>big(N, 0), small(N, 0);
    for(auto &i : s){
        if('A' <= i && 'Z' >= i) big[i - 'A']++;
        else small[i - 'a']++;
    }
    int answer = 0;
    for(int i = 0; i < N; i++){
        int pairs = min(small[i], big[i]);
        answer += pairs;
        small[i] -=pairs; big[i] -= pairs;
        int add = min(k, max(small[i], big[i]) / 2);
        k -= add; answer += add;
    }
    cout << answer << endl;
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