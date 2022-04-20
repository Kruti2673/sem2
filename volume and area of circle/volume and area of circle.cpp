#include<iostream>
using namespace std;
float areaofsphere(int r);
float volumeofsphere(int r);
int main()
{
	cout << "Kruti Vadaliya" << endl;
	cout << "92100103349" << endl;
	int r;
	cout << "Enter redius:";
	cin >> r;
	cout << "area of sphere:" << areaofsphere(r) << endl;
	cout << "volume of sphere:" << volumeofsphere(r) << endl;
	return 0;
}
float areaofsphere(int r)
{
	return 4 * 3.14 * r * r;
}
float volumeofsphere(int r)
{
	return 1.33 * 3.14 * r * r * r;
}

