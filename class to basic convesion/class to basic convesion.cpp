#include<iostream>
using namespace std;

class Time
{
	int hours;
	int minutes;
public:
	void getTime();
	void displayTime();
	operator int();
};
void Time::getTime()
{
	cout << "enter h:";
	cin >> hours;
	cout << "enter m:";
	cin >> minutes;
}
void Time::displayTime()
{
	cout << hours << ":" << minutes << endl;
}
Time::operator int()
{
	int temp = (hours * 60) + minutes;
	return temp;
}
int main()
{
	Time t;
	t.getTime();
	int min;
	min = t;
	cout << "total minutes:" << min << endl;
	return 0;
}