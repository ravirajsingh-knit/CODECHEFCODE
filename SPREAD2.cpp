#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,ans=0;
	    cin>>n;
	    string p;
	    vector<string> s;
	    vector<int> s1;
	    for(int i=0;i<n;i++){
	        cin>>p;
	        int x=2;
	        bool b=true;
	        for(int j=0;j<s.size();j++)
	            if(s[j]==p){
	                b=false;
	                x=s1[j]/2;
	            }
	        for(int j=1;j<p.length()&&b;j++){
	            if(((p[j-1]=='d'||p[j-1]=='f')&&(p[j]=='d'||p[j]=='f'))||((p[j-1]=='j'||p[j-1]=='k')&&(p[j]=='j'||p[j]=='k')))
	                x+=4;
	           else
	                x+=2;
	        }
	        if(b){
	        s.push_back(p);
	        s1.push_back(x);
	        }
	        ans+=x;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
