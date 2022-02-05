	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int k,r;
		cin >> k >> r;
		int count=1;
		int sum=k;
		while(sum%10!=r){
			if(sum%10==0)break;
			sum+=k;
			count++;
		}
		cout << count;
}