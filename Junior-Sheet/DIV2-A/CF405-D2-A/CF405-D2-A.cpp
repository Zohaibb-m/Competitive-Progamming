	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int n;
		vector<int> no;
		cin >> n;
		for(int i=0;i<n;i++){
			int y;
			cin >> y;
			no.push_back(y);
		}
		sort(no.begin(),no.end());
		for(auto i:no)
				cout << i << " ";
	}