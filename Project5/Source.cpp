#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	cout << "����� �������? ��-1, ���-0" << endl;
	cin >> a;
	while(a<2||a>-1)
	{
		cout << "�����������\n";
		cin >> a ;
	}
	if (a == 1) {
		cout << "� ������� ������" << endl;
		return 0;
	}
	cout << "�� ���������? ��-1, ���-0" << endl;
	cin >> b;
	while (b<2 || b>-1)
	{
		cout << "�����������\n";
		cin >> b ;
	}
	cout << "����� ����������? ��-1, ���-0" << endl;
	cin >> c;
	while (c<2 || c>-1)
	{
		cout << "�����������\n";
		cin >> c ;
	}
	if (b * c == 1) {
		cout << "� ������� ������" << endl;
	}
	else
		cout << "� ������� �����" << endl;

}
