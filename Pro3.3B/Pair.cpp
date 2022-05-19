#include "Pair.h"
#include <iostream>
#include <sstream>

using namespace std;

Pair::Pair (int a,int b)
{
	seta(a);
	setb(b);
}

Pair::Pair(const Pair& p)
{
	*this = p;
}

Pair& Pair::operator=(const Pair& p)
{
	seta(p.geta());
	setb(p.getb());
	return *this;
}

Pair::operator string() const
{
	stringstream ss;
	ss << "(" << geta() << "," << getb() << ")";
	return ss.str();
	
}

istream & operator>>(istream & is, Pair & p)
{
	cout << " a - "; cin >> p.a;
	cout << " b - "; cin >> p.b;
	return is;
	}

ostream& operator<<(ostream& os, const Pair& p)
{
	os << string(p);
	return os;
}