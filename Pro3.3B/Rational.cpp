#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

Rational::Rational (const Rational& r)
{
	*this = r;
}

Rational& Rational::operator= (const Rational& r)
{
	setpair(r);
	return *this;
}

Rational::operator string()const
{
	stringstream ss;
	ss << geta() << "/" << getb();
	return ss.str();
}

istream & operator>> (istream& is, Rational& r)
{
	int a, b;
	cout << " a - "; cin >> a;
	cout << " b - "; cin >> b;
	r.seta(a);
	r.setb(b);
	return is;
}

ostream& operator<< (ostream& os, const Rational& r)
{
	os << string(r);
	return os;
}

Rational operator/ ( const Rational& r1, const Rational& r2)
{
	Rational r;
	r.seta(r1.geta() * r2.getb());
	r.setb(r1.getb() * r2.geta());
	return r;
}

bool operator == (const Rational& r1, const Rational& r2)
{
	return (r1.geta() == r2.geta() && r1.getb() == r2.getb());
}

bool operator >(const Rational& r1, const Rational& r2)
{
	return  (r1.geta() * r2.getb() > r2.geta() * r1.getb());
}

bool operator <(const Rational& r1, const Rational& r2)
{
	return (r1.geta() * r2.getb() < r2.geta() * r1.getb());
}