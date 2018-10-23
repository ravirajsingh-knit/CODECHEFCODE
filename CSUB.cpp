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
	int n;
	long c=0;
	cin>>n;
	string s;
	cin>>s;
	for (int i = 0; i < n; ++i)
	{	
		if(s[i]=='1')
			c++;
	}
	if(c%2==0)
		cout<<(c/2)*(c+1)<<endl;
	else
		cout<<(c*(c+1))/2<<endl;
}
return 0;
}