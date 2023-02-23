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
    int n;
    cin>>n;
    vector<int>vi(n);
    vector<pair<int,int>>ans;
    for (auto &x: vi)cin >> x;
    for (int i = 0; i < n; i++)
    {
        int mi=1e9+7;
        int current=0;
        for (int j = i; j <n ; j++)
        {
            if(vi[j]<mi)
            {
                mi=vi[j];
                current=j;
            }
        }
        swap(vi[i],vi[current]);
        ans.push_back({i,current});
    }
    sort(vi.begin(), vi.end());
    cout<<ans.size()<<"\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<" \n";
    }
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