#include<iostream>
using namespace std;
class Complex
{
	int real;
	int imaginary;
public:
	void getComplexNumber()
	{
		cout << "Enter real:";
		cin >> real;
		cout << "Enter imaginary:";
		cin >> imaginary;
	}
	void displayComplexNumber()
	{
		cout << real << "+" << imaginary << "i" << endl;
	}
	Complex operator+(Complex x2)
	{
		Complex temp;
		temp.real = real + x2.real;
		temp.imaginary = imaginary + x2.imaginary;
		return temp;
	}
};

int main()
{
	Complex c1, c2, c3;
	c1.getComplexNumber();
	c1.displayComplexNumber();
	c2.getComplexNumber();
	c2.displayComplexNumber();

	c3 =c1+c2;
	cout << "addition of 2 complex number:";
	c3.displayComplexNumber();
	return 0;

}
