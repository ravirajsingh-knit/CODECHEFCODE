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
	string s;
	cin>>s;
	stack<char> app;
	int c=0,a=0;

	for(int i=0;i<s.length();i++){
		if(s[i]=='<')
			app.push(s[i]);
		else{
			if(app.size()>0){
				app.pop();
				if(app.empty())
					a=max(a,i);
				}
			else
				break;	
			}
		}
		if(a!=0)
			cout<<a+1<<endl;
		else
			cout<<0<<endl;
	}	
return 0;
}		