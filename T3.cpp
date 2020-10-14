#include<iostream>
using namespace std;
int day(int * a, int* b, int* c);
double week(int * a, int* b, int* c);
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
	d = day(&a, &b, &c);
	double w = week(&a, &b, &c);
	cout << d << endl << w << endl;
}
int day(int * a, int* b, int* c)
{
	int M[12], i;
	for (i = 0; i < 7; i += 2)
		M[i] = 31;
	for (i = 7; i < 12; i += 2)
		M[i] = 31;
	M[3] = M[5] = M[10] = 30;
	if ((*a % 100 == 0) && (*a % 400 == 0))
		M[1] = 29;
	else if ((*a % 100 != 0) && (*a % 4 == 0))
		M[1] = 29;
	else
		M[1] = 28;
	int sum = *c;
	for (i = 0; i < (*b - 1); i++)
		sum += M[i];
	return sum;
}
double week(int * a, int* b, int* c)
{
	int sum;
	sum = day(a, b, c);
	double w;
	w = ceil(sum /7.0);
	return w;
}