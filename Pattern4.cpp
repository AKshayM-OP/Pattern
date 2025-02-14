#include<iostream>
using namespace std;
int main() {
	int a, b, c=3,d;
	for (a = 0; a <= 2; a++) {
		for (b = 0; b <= c; b++) {
			cout << ' ';
		}
		cout << 'x';
		if (a > 0) {
				for (d = 0; d <= 2; d++) {
					cout << ' ';
				}
				cout << 'x';
				if(a==2){
					for (d = 0; d <= 2; d++) {
						cout << ' ';
					}
					cout << 'x';
				}
		}
		cout << endl;
		c = c - 2;
	}
	return 0;
}
//----x
//--x---x
//x---x---x