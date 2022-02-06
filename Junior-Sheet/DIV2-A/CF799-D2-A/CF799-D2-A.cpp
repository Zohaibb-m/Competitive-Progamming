	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int no,t,q,s;
		cin >> no >> t >> q >> s;
		int a=(no+q-1)/q;
		int o1=0,o2=s;
		for(int i=0;i<a;i++){
			if(o1<=o2)o1+=t;
			else o2+=t;
		}
	max(o1,o2)<a*t?cout << "YES":cout << "NO";
	}