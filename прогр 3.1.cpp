﻿#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "A=" << a << ", B=" << b << endl;
	return 0;
}

