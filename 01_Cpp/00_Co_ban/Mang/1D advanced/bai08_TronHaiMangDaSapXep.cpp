#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m; cin>>n>>m;
	int a[n], b[m];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];

	int i = 0, j = 0;
	while(i<n && j<m){
		if (a[i]<b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else {
			cout<<b[j]<<" ";
			j++;
		}
	}
	while(i<n) cout<<a[i++];
	while(j<n) cout<<b[j++];

	return 0;
}