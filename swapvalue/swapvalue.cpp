#include<iostream>
using namespace std;
void swapbyvaule(int a, int b);
void swapbyreference(int& a, int& b);
int main()
{

	int a, b;
	cout << "Enter First Number:";
	cin >> a;
	cout << "Enter Second Number:";
	cin >> b;
	swapbyvaule(a, b);
	cout << "After Swapping:" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swapbyreference(a, b);
	cout << "After Swapping:" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

void swapbyvaule(int x, int y)
{
	int c = x;
	x = y;
	y = c;
}

void swapbyreference(int& x, int& y)
{
	int c = x;
	x = y;
	y = c;
}
