#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, x1, x2, delt;
	cin >> a >> b >> c;
	delt = sqrt(b*b - 4 * a*c);
	if (delt >= 0)
	{
		x1 = (-b + delt) / (2 * a);
		x2 = (-b - delt) / (2 * a);
		cout << x1 << endl << x2 << endl;
	}
	else
	{
		float p1, p2;
		delt = sqrt(4 * a*c - b * b);
		p1 = -b / (2 * a);
		p2 = delt / (2 * a);
		printf_s("%f+%fi,p1,p2");
		printf_s("%f-%fi,p1,p2");
	}

}