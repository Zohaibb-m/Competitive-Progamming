	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		string a,b;
		int same=1;
		cin >> a >> b;
		for(int i=0;i<a.size();i++){
			a[i]=tolower(a[i]);
			b[i]=tolower(b[i]);
			if(a[i]>b[i]){cout << 1;same=0;break;}
			else if(a[i]<b[i]){cout << -1;same=0;break;}
		}
		if (same==1)cout << 0;
	}