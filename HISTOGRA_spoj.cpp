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
	int A[n],m=0,i;
	for(int i=0;i<n;i++)
		cin>>A[i];
	stack<int> app;
	for(i=0;i<n;i++){
		if(app.empty())
			app.push(i);
		else if(A[app.top()]<A[i])
			app.push(i);
		else if(A[app.top()]>A[i]){
			while(A[app.top()]>A[i]){
				int temp=A[app.top()];
				m=max(m,temp*(i-app.top()));
				//cout<<i<<" "<<m<<" "<<app.top()<<endl;
				
				app.pop();
				if(app.empty())
					break;

			}
			//cout<<m<<" ";
			app.push(i);
		}
	}
	while(!app.empty()){
		int temp=A[app.top()];
		m=max(m,temp*(i-app.top()));
		app.pop();
	}
	cout<<m<<endl;
	cin>>n;
}
return 0;
}	