#include<iostream>
using namespace std;
int main()
{
	float c, b, x;
	cin >> b;
	cin >> c;
	x = -c / b;
	if (b == 0) {
		cout << "nope" << endl;
		return 0;
	}
	if (x == -0) { cout << -x << endl; }
	else
	cout << x << endl;
}