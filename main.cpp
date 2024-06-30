#include <iostream>
#include "Fracction.h"
using namespace std;


int main() {

	Fraction fr1(10, 3);

	Fraction fr2(5, 8);

	Fraction fr3;
	fr3= fr1 - fr2;

	++fr3;

	fr3.display();

	bool flag = fr1 && fr3;

	cout << endl << endl << flag;

	Fraction fr4(0, 1);

	flag = fr4 && fr3;

	cout << endl << endl << flag;

	flag = fr4 || fr3;

	cout << endl << endl << flag << endl;

	cin >> fr3;

	cout << fr3;
}
