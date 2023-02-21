#include<bits/stdc++.h>
using namespace std;
int n,c,k,lasta;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>c>>lasta;
	for(int i=1,a;i<n;i++){
		cin>>a;
		k=max(lasta-a,k),lasta=a;
	}
	cout<<(k<=c?0:k-c);
	return 0;
}