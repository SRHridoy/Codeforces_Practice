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
    int ans = s.size();
    vector<int>sum(300);
    fo(i,s.size())
        sum[s[i]]++;
    ans = min(ans, (sum['n'] - 1) / 2);
    ans = min(ans, sum['i']);
    ans = min(ans, sum['e'] / 3);
    ans = min(ans, sum['t']);
    cout << ans << endl;

//     int cntN = 0,cntI = 0, cntT = 0, cntE = 0;
//     cntN = (count(all(s),'n')/3);
//     cntI = count(all(s),'i');
//     cntE = (count(all(s),'e')/3);
//     cntT = count(all(s),'t');
//     if(s == "nineteenineteen" ){
//         cout << 2 << endl;
//         return;
//     }
//     if(count(all(s),'n')<3 || count(all(s),'e')<3){
//         cout << 0 << endl;
//         return;
//     }else{
//         cout << min(cntN,min(cntT,min(cntE,cntI))) << endl;
//     }
//    // cout << cntN << " " <<cntI << " " << cntE << " " << cntT << endl;


    

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