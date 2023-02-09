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
    string a, b; cin >> a >> b;
    int c = stoi(a) + stoi(b);
    ostringstream Cs;
    Cs << c;
    string Css = Cs.str();

    int sizeA = a.size();
    fo(i,sizeA){
        if(a[i]=='0'){
            a.erase(a.begin()+i);
        }
    }
    fo(i,a.size()){
        if(a[i]=='0'){
            a.erase(a.begin()+i);
        }
    }
    int sizeB = b.size();
    fo(i,sizeB){
        if(b[i]=='0'){
            b.erase(b.begin()+i);
        }
    }
    fo(i,b.size()){
        if(b[i]=='0'){
            b.erase(b.begin()+i);
        }
    }
    int sizeCss = Css.size();
    fo(i,sizeCss){
        if(Css[i]=='0'){
            Css.erase(Css.begin()+i);
        }
    }
    fo(i,Css.size()){
        if(Css[i]=='0'){
            Css.erase(Css.begin()+i);
        }
    }

    int intCss = stoi(Css);

    int intA = stoi(a);
    int intB = stoi(b);
    int intC = intA + intB;
    
    if(intCss == intC){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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