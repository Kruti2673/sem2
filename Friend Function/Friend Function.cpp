#include<iostream>
using namespace std;

class Number
{
private:
	int a;
	int b;
public:
	void getdata();
	friend void calculateAverage(Number n);
};

void Number::getdata()
{
	cout << "Enter a";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
}
void calculateAverage(Number n)
{
	cout << "Average =" << (n.a + n.b) / 2 << endl;
}
int main()
{
	Number n;
	n.getdata();
	calculateAverage(n);
	return 0;
}