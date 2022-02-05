	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		vector <pair<int,int>> jersey;
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			int x,y;
			cin >> x >> y;
			jersey.push_back({x,y});
		}
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(jersey[i].second==jersey[j].first)count++;
			}
		}
		cout << count;
}