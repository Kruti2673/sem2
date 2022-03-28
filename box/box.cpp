#include<iostream>
using namespace std;
class Box
{
private:
	double length;
	double breadth;
	double height;

public:
	void getdata();
	double area();
	double volume();
};
void Box::getdata()
{
	cout << "enter length:";
	cin >> length;
	cout << "enter breadth:";
	cin >> breadth;
	cout << "enter height:";
	cin >> height;
}
double Box::volume()
{
	return length * breadth * height;
}
double Box::area()
{
	return length * breadth;
}
int main()
{
	Box b1, b2;
	cout << "Details of box1"<<endl;
	b1.getdata();
	cout << "area of box =" << b1.area() << endl;
	cout << "volume of box =" << b1.volume() << endl;

	cout << "Details of box2"<<endl;
	b2.getdata();
	cout << "area of box =" << b2.area() << endl;
	cout << "volume of box =" << b2.volume() << endl;

	return 0;
}