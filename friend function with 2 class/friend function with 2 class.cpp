#include<iostream>
using namespace std;

class Number2;
class Number1
{
private:
	int a;
public:
	void getdata();
	friend void findLArgerNumber(Number1 n1,Number2 n2);
};
class Number2
{
private:
	int a;
public:
	void getdata();
	friend void findLArgerNumber(Number1 n1, Number2 n2);
};
void Number1::getdata()
{
	cout << "Enter a";
	cin >> a;
}
void Number2::getdata()
{
	cout << "Enter a";
	cin >> a;
}
void findLargerNumber(Number1 n1, Number2 n2)
{
	if (n1.a> n2.a)
		cout << n1.a << "is larger" << endl;
	else
		cout << n1.a << "is larger" << endl;
}
int main()
{
	Number1 n1;
	Number2 n2;
	n1.getdata();
	n2.getdata();
	findLargerNumber(n1, n2);
	return 0;
}