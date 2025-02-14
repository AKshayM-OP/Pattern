#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	for (b = 0, a = 1; b <= 4; b++, a++) {
		for (c = 0; c <= b; c++) {
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
//1
//22
//333
//4444
//55555