	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		long long a,b,d;
		char ch;
		long count=0;
		cin >> a >> b;
		for(int i=0;i<a;i++){
			cin >> ch >> d;
			if(ch=='+')b+=d;
			if(ch=='-'){
				if(b>=d){
					b-=d;
				}
				else count++;
			}
		}
		cout << b << " " << count;
	}