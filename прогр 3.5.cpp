﻿#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y=" << y << endl;
	return 0;
}
