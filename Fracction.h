#pragma once
#include <iostream>
#include<string>
using namespace std;


//FUnction to get the greatest common factor ....................................

int GCD(int x, int y) {
	if (y == 0) {
		return x;
	}
	return GCD(y, x % y);
}


//Initializing the fraction class ..............................

class Fraction {

	//Private member includes the nominator and denominator .................................

private:
	int nom;
	int denom;

public:

	//Constructors ...............................

	Fraction();
	Fraction(int x);
	Fraction(int x, int y);
	Fraction(Fraction& m);


	//Getters .................................

	int getNum();
	int getDenom();


	//Setters ......................................

	void setnum(int x);
	void setdenom(int y);


	//Display ..............................

	void display();


	//Arthematic operations ............................

	Fraction operator+(Fraction& m);
	Fraction operator-(Fraction& m);
	Fraction operator*(Fraction& m);
	Fraction operator/(Fraction& m);


	//Arthematic operation on 1st fraction ..............................

	Fraction& operator+=(Fraction& m);
	Fraction& operator-=(Fraction& m);
	Fraction& operator*=(Fraction& m);
	Fraction& operator/=(Fraction& m);


	//Other operations ...........................

	bool operator==(Fraction& m);
	bool operator!=(Fraction& m);
	bool operator<(Fraction& m);
	bool operator>(Fraction& m);
	bool operator>=(Fraction& m);
	bool operator<=(Fraction& m);


	//Index ..................................

	Fraction& operator[](int index);


	//Increment or decrement ...............................

	Fraction& operator++();
	Fraction* operator++(int);
	Fraction& operator--();
	Fraction* operator--(int);


	//Didn't understand .................................

//	Fraction operator()();


	//Bitwise operations ...........................

	bool operator&&(Fraction& m);
	bool operator||(Fraction& m);


	//Adress operator .................................

	Fraction* operator&();


	//Normalize function .....................................

	void normalize();


	//Input and output .............................

	friend ostream& operator<<(ostream& out, Fraction& m);
	friend istream& operator>>(istream& in, Fraction& m);

};
