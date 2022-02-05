	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int n,nu;
		vector<int> no;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> nu;
			no.push_back(nu);
			}
		int ser=0,dim=0,turn=1;
		while(!no.empty()){
			auto a=no.front();
			auto b=no.back();
			if(a>b && turn==1){
				ser+=a;
				no.erase(no.begin());
			}
			else if(turn==1){
				ser+=b;
				no.erase(no.end()-1);
			}
			else if(a>b && turn==-1){
				dim+=a;
				no.erase(no.begin());
			}
			else if(turn==-1){
				dim+=b;
				no.erase(no.end()-1);
			}
			turn*=-1;

		}
		cout << ser << " " << dim;
}