	#include <bits/stdc++.h>

	using namespace std;

	int main(){
		int y,w;
		cin >> y >> w;
		int ans=6-max(y,w)+1;
		int num=ans,den=6;
		while(den%ans==0 && num!=1 ){
			den=den/num;
			num=num/num;
		}
		while(den%2==0 && num%2==0){
			den=den/2;
			num=num/2;
		}
		cout << num << "/" << den << "\n";
}