#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	cout << "лампа вкючена? да-1, нет-0" << endl;
	cin >> a;
	while(a<2||a>-1)
	{
		cout << "неправильно\n";
		cin >> a ;
	}
	if (a == 1) {
		cout << "в комнате светло" << endl;
		return 0;
	}
	cout << "на улицедень? да-1, нет-0" << endl;
	cin >> b;
	while (b<2 || b>-1)
	{
		cout << "неправильно\n";
		cin >> b ;
	}
	cout << "шторы распахнуты? да-1, нет-0" << endl;
	cin >> c;
	while (c<2 || c>-1)
	{
		cout << "неправильно\n";
		cin >> c ;
	}
	if (b * c == 1) {
		cout << "в комнате светло" << endl;
	}
	else
		cout << "в комнате темно" << endl;

}
