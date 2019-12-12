#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c;
	d = a;
	a = b;
	b = c;
	c = d;
	cout << "A=" << a << ", B=" << b << ", C=" << c << endl;
	return 0;
}