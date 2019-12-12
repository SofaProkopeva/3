#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a;
	b = a * a;
	c = b * a;
	a = b * c;
	b = a * a;
	c = a * b;
	cout << "a^15=" << c << endl;
	return 0;
}
