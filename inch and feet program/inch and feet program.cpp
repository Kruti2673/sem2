#include<iostream>

using namespace std;
class Distance
{
private:
	int inch;
	int feet;
public:
	void getDistance();
	void displayDistance();
	Distance addDistance(Distance d2);

};

void Distance::getDistance()
{
	cout << "Enter Distance in Feets:";
	cin >> feet;
	cout << "Enter Distance in Inches:";
	cin >> inch;
}

void Distance::displayDistance()
{
	cout << "Distance:";
	cout << feet << " ' " << inch << " '' " << endl;
}

Distance Distance::addDistance(Distance d2)
{
	Distance temp;
	temp.feet = feet + d2.feet;
	temp.inch = inch + d2.inch;
	if (temp.inch >= 12)
	{
		temp.feet++;
		temp.inch = temp.inch - 12;
	}
	return temp;
}

int main()
{
	cout << "Kruti Vadaliya" << endl;
	cout << "92100103349" << endl;
	Distance d1, d2, d3;
	d1.getDistance();
	d1.displayDistance();
	d2.getDistance();
	d2.displayDistance();

	d3 = d1.addDistance(d2);
	cout << "Addition of Distance:" << endl;
	d3.displayDistance();
}
