#include <conio.h>
#include <iostream>
#define int long long
using namespace std; 
string input;

signed main(){
	while(cin >> input){
		int c = _getch();
		if(c == 27){
			system("cls");
		}
	} 
}
