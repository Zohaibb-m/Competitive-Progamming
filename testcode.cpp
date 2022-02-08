	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int t,n,k;
		string s,temp,temp2;
		cin >> t;
		vector <string> se;
		queue <string> q;
		for(int i=0;i<t;i++){
			se.clear();
			cin >> n >> k;
			cin >> s;
			se.push_back(s);
			for(int i=0;i<k;i++){
					for(auto value:se){
						q.push(value);
						se.erase(se.begin());
					}

					se.clear();
					while(!q.empty()){
						string e=q.front();
						q.pop();
						string temp=e;
						reverse(temp.begin(),temp.end());
						if(find(se.begin(),se.end(),e+temp)==se.end())se.push_back(e+temp);
						if(find(se.begin(),se.end(),temp+e)==se.end())se.push_back(temp+e);
						// for(auto v:se)cout << v << "\n";
						// cout << "HEHE\n";
					}
		}
			
			cout << se.size() << "\n";
		}
	}