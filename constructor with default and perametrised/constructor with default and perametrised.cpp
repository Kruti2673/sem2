#include<iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m);
	void displaydataTime();
	Time addTime(Time t2);
};
Time::Time()
{
	hours = 0;
	minutes = 0;
}
Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
void Time::displaydataTime()
{
	cout << hours << ":" << minutes << endl;
}
Time Time::addTime(Time t2)
{
	Time temp;
	temp.hours = hours + t2.hours;
	temp.minutes = minutes + t2.minutes;
	
	if (temp.minutes >= 60)
	{
		temp.hours++;
		temp.minutes = temp.minutes - 60;
	}
	return temp;
}
int main()
{
	Time t1(5, 30), t2(3, 45), t3;
	t1.displaydataTime();
	t2.displaydataTime();

	t3 = t1.addTime(t2);
	cout << "Addition of 2 time is : ";
	t3.displaydataTime();
	return 0;
}