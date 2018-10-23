#include<bits/stdc++.h>
#define sync ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
int main(){
sync;
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
int t;
cin>>t;
while(t--){
	int n,k,p;
	cin>>n>>k;
	string s[n],x;
	for(int i=0;i<n;i++)
		cin>>s[i];
	set<string> app;
	for(int i=0;i<k;i++){
		cin>>p;
		for(int j=0;j<p;j++){
			cin>>x;
			app.insert(x);
		}
	}
	bool b=false;
	for(int i=0;i<n;i++){
		b=false;
		for(string temp:app){
			if(temp==s[i]){
				b=true;
				break;
			}
		}
		if(b)
			cout<<"YES"<<" ";
		else
			cout<<"NO"<<" ";
		}
		cout<<endl;
}
return 0;
}