#include<iostream>
using namespace std;
int main() {
	int a, b, c = 4, d =0,e=0,f=0;

	a = int('A');
	for (b = 0; b <= 3; b++,++f){
		for (e = 0; e <= f;e++) {
			cout << ' ';
		}
		cout << char(a);
		for(d =0 ;d <= c ;d++){
			cout << ' ';
		}
		if (b < 3) {
			cout << char(a) << endl;
		}
		else {
			break;
		}
		a = a + 1;
		if (c > 3) {
			c = c - 2;
		}
		else if(c > 0) {
			c = c - 2;
		}
		else if (c == 0) {
			continue;
		}
	}
	return 0;
}
//A-----A
//-B---B
//--C-C
//---D