#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	y = pow(x, 6) * 3 - 6 * pow(x, 2) - 7;
	cout << "y=" << y << endl;
	return 0;
}

