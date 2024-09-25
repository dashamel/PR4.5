#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, a, b, R;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 1; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "a = "; cin >> a; 
		cout << "b = "; cin >> b; 
		cout << "R = "; cin >> R; 

		if (x >= -a && x <= a && y >= -b && y <= 0)
		{
			cout << "yes" << endl;
		}
		else
			if (x <= 0 && x * x + y * y <= R * R)
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
	}
	cout << endl << fixed;

	double maxVal = max({ a, b, R }); 
		for (int i = 0; i < 10; i++)
		{
			double maxVal = max({ a, b, R }); 
			x = 6. * rand() / RAND_MAX - maxVal;  
			y = 6. * rand() / RAND_MAX - maxVal; 

			if (x >= -a && x <= a && y >= -b && y <= 0)
			{
				cout << setw(8) << setprecision(4) << x << " "
					<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			}
			else
				if (x <= 0 && x * x + y * y <= R * R)
				{
					cout << setw(8) << setprecision(4) << x << " "
						<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
				}
				else
				{
					cout << setw(8) << setprecision(4) << x << " "
						<< setw(8) << setprecision(4) << y << " " << "no" << endl;
				}
		}
	return 0;
}
