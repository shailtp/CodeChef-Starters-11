#include <iostream>
#include <bits/stdc++.h>
#define int unsigned long long

using namespace std;

int32_t main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	 
	
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    
	    int sum=(n*(n+1))/2;
	    sum=sum-s;
	    if(sum<=n && sum>=1){
	        
	        cout<<sum<<"\n";
	    }
	    else{
	        cout<<"-1"<<"\n";
	    }
	}
	return 0;
}
