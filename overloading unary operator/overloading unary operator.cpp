#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
	int z;
public:
	void getPoint();
	void displayPoint();
	void operator-();
	void operator++();
};
void Point::getPoint()
{
	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;
	cout << "Enter z:";
	cin >> z;
}
void Point::displayPoint()
{
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}
void Point::operator++()
{
	x++;
	y++;
	z++;
}
void Point::operator-()
{
	x = -x;
	y = -y;
	z = -z;
}
int main()
{
	Point p;
	p.getPoint();
	p.displayPoint();

	-p;
	p.displayPoint();

	++p;
	p.displayPoint();

	return 0;
}