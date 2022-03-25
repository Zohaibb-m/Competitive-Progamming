	#include <bits/stdc++.h>

	using namespace std;

int main(){
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		#endif
		string n;
		cin >> n;
		int count=0;
		bool c=false,s=false,nu=false;
		if(n.length()>=5)count++;
		for(char ch:n){
			if(!c && ch>='A'&&ch<='Z'){count++;c=true;}
			if(!s && ch>='a'&&ch<='z'){count++;s=true;}
			if(!nu && ch>='0'&&ch<='9'){count++;nu=true;}
		}
		if(count<4)cout<<"Too weak\n";
		else cout<<"Correct\n";
	}
	
	