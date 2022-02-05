	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		unordered_map<char,int> m;
		int n;
		for(char i='1';i<='4';i++){
		cin >> n;
		m[i]=n;
		}
		string s;
		cin >> s;
		int sum=0;
		for(int i=0;i<s.size();i++){
			sum+=m[s[i]];
		}
		cout << sum;
}