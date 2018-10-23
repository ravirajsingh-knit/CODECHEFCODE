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
int n;
cin>>n;
while(n!=0){
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	stack<int> app;
	int c=1;
	for(int i=0;i<n;){
		if(c==A[i]){
			i++;
			c++;
		}
		else if(!app.empty()&&c==app.top()){
			app.pop();
			c++;
		}
		else{

			app.push(A[i]);
			i++;
		}
		//cout<<c<<endl;
	}

	if(c==n)
		cout<<"yes"<<endl;
	else{
		while(!app.empty()&&c==app.top()){
			c++;
			app.pop();
		//	cout<<c<<endl;
		}
		
		if(c==n+1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		
	}
	cin>>n;
	}
	return 0;
}	