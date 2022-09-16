#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d, x1, x2;
	cin >> a;
	cin >> b;
	cin >> c;
	d = b * b - 4 * a * c;
	cout <<  d <<endl;
	if (d < 0)
	{
		cout << "nope" << endl;
		return 0;

	}
	if (d > 0)
	{
		x1 = ((-b) + sqrt(d)) / (2 * a);
		if (a == 0) {
			cout << "nope" << endl;
			return 0;
		}
		else 
			cout << x1 << endl;
		x2 = ((-b) - sqrt(d)) / (2 * a);
		
			cout << x2 << endl;
	}
	if (d == 0)
	{
		x1 = (-b) / (2 * a);
		if (a == 0) {
			cout << "nope" << endl;
		}
		else
		cout << x1 << endl;
	}
}