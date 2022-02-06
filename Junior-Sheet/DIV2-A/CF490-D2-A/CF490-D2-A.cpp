	#include <bits/stdc++.h>

	using namespace std;


	int print(vector<int> &st,int no,int index){
		for(int i=index;i<st.size();i++){
			if(st[i]==no){
				cout << i+1 << " ";
				return i+1;
			}
		}
	}

	int count(int no,vector<int> &st){
		int count=0;
		for(auto v:st){
			if(v==no)count++;
		}
		return count;
	}

	int main(){
		int n,va;
		cin >> n;
		vector<int> st;
		for(int i=0;i<n;i++){
			cin >> va;
			st.push_back(va);
		}
		int ans=min(count(1,st),min(count(2,st),count(3,st)));
		cout << ans << "\n";
		int in1=0,in2=0,in3=0;
		for(int i=0;i<ans;i++){
			in1=print(st,1,in1);
			in2=print(st,2,in2);
			in3=print(st,3,in3);
			cout << "\n";
		}

	}
