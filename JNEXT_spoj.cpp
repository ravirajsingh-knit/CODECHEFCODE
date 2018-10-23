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
	cin>>n;
	int A[n],i;
	for(i=0;i<n;i++)
		cin>>A[i];
	vector<int> v;
	int x=A[n-1];
	v.push_back(A[n-1]);
	for(i=n-2;i>=0;i--){
		if(x<=A[i]){
			x=A[i];
			v.push_back(A[i]);
		}
		else{
			x=A[i];
			break;
		}
	}
	if(v.size()==n)
		cout<<-1<<endl;
	else{
		sort(v.begin(),v.end());
		
		std::vector<int>::iterator up=upper_bound (v.begin(), v.end(),x);
		int inv=v[up-v.begin()];
		v[up-v.begin()]=-1;
		for(int j=0;j<i;j++)
			cout<<A[j];
		cout<<inv;
		v.push_back(x);
		sort(v.begin(), v.end());
		for(int x:v)
			if(x!=-1)
				cout<<x;
		cout<<endl;		
	}
}
return 0;
}	