#include<iostream>
using namespace std;
inline void max(int a, int b, int c)
{
	int max;
	max = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
	cout << max;
}
int main()
{
	cout << "Kruti Vadaliya" << endl;
	cout << "92100103349" << endl;
	int a, b, c;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter c:";
	cin >> c;
	max(a, b, c);
	return 0;
}
