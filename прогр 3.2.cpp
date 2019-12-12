#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c;
	d = a;
	a = c;
	c = b;
	b = d;
	cout << "A=" << a << ", B=" << b << ", C=" << c << endl;
	return 0;
}

