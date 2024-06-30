#include <iostream>
#include "Fracction.h"
using namespace std;


//Normal constructor ............................

Fraction::Fraction() {
    nom = 0;
    denom = 1;
}


//Constructor with single int ..............................

Fraction::Fraction(int x) {
    nom = x;
    denom = 1;
}


//Constructor with both int .......................................

Fraction::Fraction(int x, int y) {

    nom = x;
    denom = y;

    normalize();

}


//Copy constructor ................................

Fraction::Fraction(Fraction& m) {
    nom = m.nom;
    denom = m.denom;
}


//Getters ...............................

int Fraction::getNum() {
    return nom;
}

int Fraction::getDenom() {
    return denom;
}


//Setters ...................................

void Fraction::setnum(int x) {
    nom = x;
}

void Fraction::setdenom(int x) {
    if (x == 0) {
        cout << "Can not make 0 as denominator" << endl;
        return;
    }
    denom = x;
    return;
}


//Output ..................................

void Fraction::display() {
    cout << nom << "/" << denom << endl;
}


//Normalizing the given fraction ........................................

void Fraction::normalize() {

    if (nom == 0) {
        denom = 1;
    }

    if (denom == 0) {
        cout << "Invalid argument Denominator can not be zero" << endl;
    }

    int gcd = GCD(nom, denom);
    nom /= gcd;
    denom /= gcd;

}


//Addition of 2 fractions results in 3rd one ...................................

Fraction Fraction :: operator+(Fraction& m) {
    Fraction x;
    int lcm = denom * m.denom / GCD(denom, m.denom);
    x.nom = nom * (lcm / denom) + m.nom * (lcm / m.denom);
    x.denom = lcm;
    normalize();
    return x;
}


//Subtraction of 2 fractions results in 3rd one .................................

Fraction Fraction :: operator-(Fraction& m) {
    Fraction x;
    int lcm = denom * m.denom / GCD(denom, m.denom);
    x.nom = nom * (lcm / denom) - m.nom * (lcm / m.denom);
    x.denom = lcm;
    normalize();
    return x;
}


//Multiplication of 2 fractions results in 3rd one .............................

Fraction Fraction :: operator*(Fraction& m) {
    Fraction x;
    x.denom = denom * m.denom;
    x.nom = nom * m.nom;
    x.normalize();
    return x;
}


//Division of 2 fractions results in 3rd one .............................

Fraction Fraction :: operator/(Fraction& m) {
    Fraction x;
    x.denom = denom * m.nom;
    x.nom = nom * m.denom;
    x.normalize();
    return x;
}


//Addition of 2nd fraction into 1st one ........................................

Fraction& Fraction::operator+=(Fraction& m) {
    int lcm = denom * m.denom / GCD(denom, m.denom);
    nom = nom * (lcm / denom) + m.nom * (lcm / m.denom);
    denom = lcm;
    normalize();
    return *this;
}


//Subtraction of 2nd fraction from 1st one .............................


Fraction& Fraction :: operator-=(Fraction& m) {
    int lcm = denom * m.denom / GCD(denom, m.denom);
    nom = nom * (lcm / denom) - m.nom * (lcm / m.denom);
    denom = lcm;
    normalize();
    return *this;
}


//Multiplication of 2nd with 1st one .................................

Fraction& Fraction :: operator*=(Fraction& m) {
    denom = denom * m.denom;
    nom = nom * m.nom;
    normalize();

    return *this;
}


//Division of 2nd from 1st one .......................................

Fraction& Fraction :: operator/=(Fraction& m) {
    denom = denom * m.nom;
    nom = nom * m.denom;
    normalize();

    return *this;
}


//Comparision of 2 fractions ..............................

bool Fraction :: operator==(Fraction& m) {
    if ((nom == m.nom) && (denom == m.denom)) {
        return true;
    }
    else {
        return false;
    }
}


//Not Equal if 2 fractions are not same ................................

bool Fraction :: operator!=(Fraction& m) {
    if ((nom == m.nom) && (denom == m.denom)) {
        return false;
    }
    else {
        return true;
    }
}


//If 1st frction is greater than 2nd one ...................................

bool Fraction :: operator<(Fraction& m) {
    if ((nom * m.denom) < (denom * m.nom)) {
        return true;
    }
    else {
        return false;
    }
}


//If 1st fraction is smaller than 2nd one ............................

bool Fraction :: operator>(Fraction& m) {
    if ((nom * m.denom) > (denom * m.nom)) {
        return true;
    }
    else {
        return false;
    }
}


//If 1st fraction is greater or equal to 2nd one ......................................

bool Fraction :: operator<=(Fraction& m) {
    if ((nom * m.denom) <= (denom * m.nom)) {
        return true;
    }
    else {
        return false;
    }
}


//If 1st fraction is smaller or equal to 2nd one ...........................

bool Fraction :: operator>=(Fraction& m) {
    if ((nom * m.denom) >= (denom * m.nom)) {
        return true;
    }
    else {
        return false;
    }
}


//Returning the given index in fraction array ..................................

Fraction& Fraction :: operator[](int index) {
    return this[index];
}


//Incrementing the fraction ................................

Fraction& Fraction :: operator++() {
    Fraction x(1, 1);
    int lcm = denom * x.denom / GCD(denom, x.denom);
    nom = nom * (lcm / denom) + x.nom * (lcm / x.denom);
    denom = lcm;
    normalize();
    return *this;
}


//Post incrementing the fraction ................................

Fraction* Fraction :: operator++(int) {
    Fraction* x;
    x = new Fraction(1, 1);
    int lcm = denom * x->denom / GCD(denom, x->denom);
    x->nom = nom * (lcm / denom) + x->nom * (lcm / x->denom);
    x->denom = lcm;
    x->normalize();
    return x;
}


//Decrementing the fraction .....................................

Fraction& Fraction :: operator--() {
    Fraction x(1, 1);
    int lcm = denom * x.denom / GCD(denom, x.denom);
    nom = nom * (lcm / denom) - x.nom * (lcm / x.denom);
    denom = lcm;
    normalize();
    return *this;
}


//Post decrementing the fraction .......................................

Fraction* Fraction :: operator--(int) {
    Fraction* x;
    x = new Fraction(1, 1);
    int lcm = denom * x->denom / GCD(denom, x->denom);
    x->nom = nom * (lcm / denom) - x->nom * (lcm / x->denom);
    x->denom = lcm;
    x->normalize();
    return x;
}


//&& operator to check if both fractions are true ..................................

bool Fraction :: operator&&(Fraction& m) {
    if (m.nom != 0 && nom != 0) {
        return true;
    }
    else {
        return false;
    }
}

//(||) to check if even 1 fraction is true ..............................

bool Fraction :: operator||(Fraction& m) {
    if (m.nom != 0 || nom != 0) {
        return true;
    }
    else {
        return false;
    }
}


//(&) to get addresss .............................................

Fraction* Fraction :: operator&() {
    return this;
}


//Output of the fraction ...............................

ostream& operator<<(ostream& out, Fraction& m) {
    out << m.nom << '/' << m.denom;
    return out;
}


//Input of the fraction ....................................

istream& operator>>(istream& in, Fraction& m) {
    cout << "Enter Nominator :  ";
    in >> m.nom;
    cout << "Enter Denominator :  ";
    in >> m.denom;
    m.normalize();
    return in;
}



/*Fraction :: {

}

Fraction :: {

}

Fraction :: {

}

Fraction :: {

}

Fraction :: {

}

Fraction :: {

}

Fraction :: {

}

Fraction :: {

}

Fraction :: {

}

Fraction :: {

}*/