#pragma once
#include <iostream>
#include <string>
#include "Pair.h"

using namespace std;

class Rational :public Pair
{
public:
	Rational(int a = 0, int b = 0)	:Pair (a, b) {};
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);
	
	friend ostream& operator<<(ostream& os, const Rational& r);
	friend istream& operator>>(istream& is, Rational& r);
	operator string() const;

	Pair getpair()const { return *this; }
	void setpair(Pair p) { seta(p.geta()); setb(p.getb()); }

	double value()const { return geta() / getb(); }
	
	friend	Rational operator/(const Rational& r1, const Rational& r2);
    friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);
};

