#include<iostream>
using namespace std;
class Time
{
	int hours;
	int minutes;
public:
	void getTime()
	{
		cout << "Enter hours:";
		cin >> hours;
		cout << "Enter minutes:";
		cin >> minutes;
	}
	void displayTime()
	{
		cout << hours << ":" << minutes  << endl;
	}
	Time operator +(Time t2)
	{
		Time temp;
		temp.hours = hours + t2.hours;
		temp.minutes = minutes + t2.minutes;

		if (temp.minutes >= 60)
		{
			temp.hours++;
			temp.minutes -= 60;
		}
		return temp;
	}
};

int main()
{
	Time t1, t2, t3;
	t1.getTime();
	t1.displayTime();
	t2.getTime();
	t2.displayTime();

	t3 = t1 + t2;
	cout << "addition of 2 complex number:";
	t3.displayTime();
	return 0;

}
