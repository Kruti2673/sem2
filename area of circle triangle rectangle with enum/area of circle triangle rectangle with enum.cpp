#include<iostream>
using namespace std;
enum area { circle, rectangle, tringle };
int main()
{
	int shape_code;
	cout << "Enter shape code:";
	cin >> shape_code;
	if (shape_code == circle)
	{
		int r;
		cout << "Enter radius:";
		cin >> r;
		float area = (3.14) * r * r;
		cout << "Area of Circle:" << area;
	}
	else if (shape_code == rectangle)
	{
		int l;
		cout << "Enter length:";
		cin >> l;
		int b;
		cout << "Enter breath:";
		cin >> b;
		float Area = l * b;
		cout << "Area of Rectangle:" << Area;
	}
	else if (shape_code == tringle)
	{
		int b,h;
		cout << "Enter base:";
		cin >> b;
		cout << "Enter height:";
		cin >> h;
		float Area = (0.5) * b * h;
		cout << "Area of Tringle:" << Area;
	}
	return 0;
}
