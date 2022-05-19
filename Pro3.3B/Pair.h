#pragma once
#include <iostream>
#include <string>

using namespace std;
class Pair
{
	int a;
	int b;
	public:
		Pair(int a=0, int b=0);
		Pair(const Pair&);
		Pair& operator=(const Pair&);
		void seta(int a){ this->a = a;}
		void setb(int b) {this->b = b;}
		int geta()const { return a; }
		int getb()const	{ return b; }
		
		operator string() const;
		friend ostream& operator<<(ostream&, const Pair&);
		friend istream& operator>>(istream&, Pair&);
		
};

