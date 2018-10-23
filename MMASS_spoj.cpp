#include<bits/stdc++.h>
#define sync ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
int mass(char c){
	if(c=='H')
		return 1;
	if(c=='C')
		return 12;
	if(c=='O')
		return 16;

}
int main(){
sync;
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
string s;
cin>>s;
stack<int> app;
for(int i=0;i<s.length();i++){
	if(s[i]=='(')
		app.push(-1);
	else if(s[i]==')'){
		int x=0;
		while(!app.empty()&&app.top()!=-1){
			x+=app.top();
			app.pop();
		}
		app.pop();
		app.push(x);
	//	cout<<x<<endl;
	}
	else if(s[i]>='0'&&s[i]<='9'){
		int temp=app.top();
		app.pop();

		app.push(temp*(s[i]-'0'));
	//	cout<<temp<<endl;
	}
	else
		app.push(mass(s[i]));
}
int p=0;
while(!app.empty()){
	p+=app.top();
	app.pop();
}
cout<<p<<endl;
return 0;
}	