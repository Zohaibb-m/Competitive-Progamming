	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		unordered_set <char> s;
		string in;
		cin >> in;
		for(int i=0;i<in.size();i++){
			s.insert(in[i]);
		}
		if(s.size()%2==0)cout << "CHAT WITH HER!";
		else  cout << "IGNORE HIM!";
	}