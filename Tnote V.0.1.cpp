#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
signed main(){
	for(int i = 0;i <= 100;++i){
		string input;
		cin >> input[i];
		int num = getche();
		if(num == 27){
			system("cls");
		}
		if(num == 13){
			string change = input;
			system("cls");
			cout << change<<endlj;
		}
	} 
}
