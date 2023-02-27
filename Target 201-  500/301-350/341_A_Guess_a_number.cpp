#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll low = -2 * pow(10, 9), high = 2 * pow(10, 9);
    while (n--)
    {
        string s;
        ll n;
        char c;
        cin >> s >> n >> c;
        if (s == ">=")
        {
            if (c == 'Y')
            {
                if(low < n) {
                    low = n;
                }
            }
            else
            {
                if(high > n) {
                    high = n;
                }
            }
        }
        else if (s == "<=")
        {
            if (c == 'Y')
            {
                if(high > n) {
                    high = n;
                }
            }
            else
            {
                if(low < n) {
                    low = n;
                }
            }
        }
        else if (s == ">")
        {
            if (c == 'Y')
            {
                if(low < n+1) {
                    low = n+1;
                }
            }
            else
            {
                if(high > n) {
                    high = n;
                }
            }
        }
        else
        {
            if (c == 'Y')
            {
                if(high > n-1) {
                    high = n-1;
                }
            }
            else
            {
                if(low < n) {
                    low = n;
                }
            }
        }
    }
    if(high < low) {
        cout << "Impossible\n";
    } else if(high == low) {
        cout << high << endl;
    } else {
        cout << (low+(high-low)/2) << endl;
    }
}

  	 			   			 	  	 	   	 	  			