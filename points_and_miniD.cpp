#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int N=2*n;
		vector<int>v(N);
		for(auto i=0;i<N;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		vector<pair<int,int>>p;
		for(int i=0;i<n;i++){
			p.push_back({v[i],v[N-1-i]});
		}
		int x=0,y=0;
		for(int i=0;i<n-1;i++){
			x+=abs(v[i]-v[i+1]);
		}
		for(int i=n;i<N-1;i++){
			y+=abs(v[i]-v[i+1]);
		}
		cout<<x+y<<endl;
		for(auto i:p){
			cout<<i.first<<" "<<i.second<<endl;
		}

	}
	return 0;
}