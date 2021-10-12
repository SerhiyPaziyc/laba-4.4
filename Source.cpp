#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------Значення---------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < -7) {
			y = 0;
		}
		else if (x >= -7 && x <= -3) {
			y = x + 7;
		}
		else if (x > -3 && x < -2) {
			y = 4;
		}
		else if (x >= -2 && x <= 2) {
			y = x * x;
		}
		else if (x > 2 && x < 4) {
			y = 2 * x - 4;
		}
		else {
			y = 0;
		}
		y = x;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}