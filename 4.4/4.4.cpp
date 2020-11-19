// Lab_04_4.cpp
// < Сенишин Михайло >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 10

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double R, xp, xk, dx, x, y;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = R;
		else
			if (-8 - R < x && x < -8 + R)
				y = sqrt(2 * pow(R, 2) - pow(x, 2) - 16 * x - 64);
			else
				if (-8 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 2)
						y = R - (1 + R) / 6 * (x + 4);
					else
						y = x - 3;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
