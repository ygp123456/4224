#include<iostream>
using namespace std;
void area(const double* a, const double* b, const double* c)
{
	double p,s;
	p = (*a + *b + *c) / 2;
	s = sqrt(p*(p - *a)*(p - *b)*(p - *c));
	cout << s << endl;
}
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	area(&a, &b, &c);
}