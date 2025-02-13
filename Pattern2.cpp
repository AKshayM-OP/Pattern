#include<iostream>
using namespace std;
int main() {
	int word, a, b, c = 0, d = 0;
	for (a = 0; a <= 3; a++) {
		if (a == 0) {
			word = int('A');
			cout << char(word);
			for (b = 0; b <= 2; b++) {
				cout << "x";
			}
			cout << char(word + 1);
			cout << endl;
		}
		else if (a == 3) {
			word = int('C');
			cout << char(word);
			for (b = 0; b <= 2; b++) {
				cout << "x";
			}
			cout << char(word + 1);
		}
		for (c; c <= 1;c++){
			cout << "x";
			for (b = 0; b <= 2; b++) {
				cout << " ";
			}
			cout << "x";
		cout << endl;
		}
	}
	return 0;
}
//A***B
//*	  *
//*   *
//C***D