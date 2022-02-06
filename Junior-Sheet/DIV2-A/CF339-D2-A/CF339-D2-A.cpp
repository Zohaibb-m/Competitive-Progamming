	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		string s;
		cin >> s;
		vector <char> no;
		for(auto ch:s){
			if(ch>='0' && ch<='9')no.push_back(ch);
		}
		sort(no.begin(),no.end());
		for(int value=0;value<no.size();value++){
			if(value==no.size()-1)cout << no[value];
			else cout << no[value] << "+";
		}
	}