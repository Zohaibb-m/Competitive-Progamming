	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int n,no;
		cin >> n;
		int count=0,crime=0,hired=0;
		for(int i=0;i<n;i++){
			cin >> no;
			if(no==-1 && hired>0)hired--;
			else if(no>0)hired+=no;
			else if(no==-1&&hired==0)count++;
		}
		cout << count;
}