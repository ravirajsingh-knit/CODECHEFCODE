#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
int main() {
sync;
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin>>t;
	bool A[200+1];
	memset(A, true,sizeof A);
	for(int i=2;i<200+1;i++){
	    if(A[i]){        
	        for(int j=sqrt(i);j>1;j--){
	            if(A[i]%j==0){
	                A[i]=false;
	                break;
	            }
	        }
	        if(A[i])	
	            for(int k=2;k*i<200+1;k++)
	                A[i*k]=false;
	    }
	}
	vector<int> vec,abc,bbc,cbc;
	for(int i=2;i<200+1;i++){
		if(A[i])
			vec.push_back(i);
	}
	// cout<<"SiZ"<<endl;
	// for(int i=0;i<vec.size();i++)
	// 	cout<<vec[i]<<" ";
	// cout<<endl;
	for(int i=0;i<vec.size();i++){
		for(int j=i+1;j<vec.size();j++){
			if(vec[i]*vec[j]<201)
				abc.push_back(vec[i]*vec[j]);
		}
	}
	// cout<<"SiZ1"<<endl;
	// for(int i=0;i<vec.size();i++)
	// 	cout<<abc[i]<<" ";
	// cout<<endl;

	for(int i=0;i<abc.size();i++){
		for(int j=i;j<abc.size();j++){
			if(abc[i]+abc[j]<201)
				cbc.push_back(abc[i]+abc[j]);
		}
	}
	// for(int i=0;i<cbc.size();i++)
	// 	cout<<cbc[i]<<" ";
//	cout<<endl;
	while(t--){
		int n;
		cin>>n;
		bool b=true;
		for(int i=0;i<cbc.size();i++)
			if(n==cbc[i]){
				b=false;
				break;
			}
		if(!b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}
