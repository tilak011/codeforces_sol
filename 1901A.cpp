#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(auto i=0;i<n;i++){
            cin>>v[i];
        }
        int maxi=INT_MIN;int prev=0;
        for(auto i=0;i<n;i++){
            maxi=max(maxi,abs(v[i]-prev));
            prev=v[i];
        }
        maxi=max(maxi,2*(abs(x-prev)));
        cout<<maxi<<endl;
    }
    return 0;
}