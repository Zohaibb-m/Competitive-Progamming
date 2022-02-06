	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int n,a,b,c,count=0;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a >> b >> c;
			if(a){
				if(b||c)count++;
			}
			else 
				if(b){
					if(c==1)count++;
				}
		}
		cout << count;
	}