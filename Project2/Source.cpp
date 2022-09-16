#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a;
	cin >> b;
	c = a - b;
	cout << c << endl;
	c = a + b;
	cout << c << endl;
	c = a * b;
	cout << c << endl;
	c = a / b;
	if (b == 0) {
		cout << "nope" << endl;
	}
	else
	cout << c << endl;
}