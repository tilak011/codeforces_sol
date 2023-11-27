#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0;
		if(n%3==0 && count==0){
			cout<<"Second"<<endl;
		}else{
		while(count<10){
			n++;
			count++;
			if(n%3==0){
				cout<<"First"<<endl;
				break;
			}
		}
	}
		
	}
	return 0;
}