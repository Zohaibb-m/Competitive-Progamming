	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count=0;
		char a=s[0];
		for(int i=1;i<n;i++){
			if(a==s[i])count++;
			else a=s[i];
		}
		cout << count;
}