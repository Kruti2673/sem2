#include<iostream>

using namespace std;

class FLOAT
{
private:
	float number;
public:
	void getdata();
	FLOAT operator+(FLOAT n2);
	FLOAT operator-(FLOAT n2);
	FLOAT operator*(FLOAT n2);
	FLOAT operator/(FLOAT n2);
};
void FLOAT::getdata()
{
	cout << "enter number:";
	cin >> number;
}
FLOAT FLOAT::operator+(FLOAT n2)
{
	FLOAT temp;
	temp.number = number + n2.number;
	cout << number << "+" << number << "=" << temp.number << endl;
	return temp;
}
FLOAT FLOAT::operator-(FLOAT n2)
{
	FLOAT temp;
	temp.number = number - n2.number;
	cout << number << "-" << number << "=" << temp.number << endl;
	return temp;
}
FLOAT FLOAT::operator*(FLOAT n2)
{
	FLOAT temp;
	temp.number = number * n2.number;
	cout << number << "*" << number << "=" << temp.number << endl;
	return temp;
}
FLOAT FLOAT::operator/(FLOAT n2)
{
	FLOAT temp;
	temp.number = number / n2.number;
	cout << number << "/" << number << "=" << temp.number << endl;
	return temp;
}
int main()
{
	FLOAT n,n1;
	n.getdata();
	n.displaydata();
	n1 = n + n;
	n1 = n - n;
	n1 = n * n;
	n1 = n / n;
	return 0;
}