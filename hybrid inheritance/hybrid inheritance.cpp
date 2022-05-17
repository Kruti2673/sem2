#include<iostream>
using namespace std;

class Student
{
protected:
	int roll;
public:
	void getRoll();
	void putRoll();
};
void Student::getRoll()
{
	cout << "Enter roll no. ";
	cin >> roll;
}
void Student::putRoll()
{
	cout << "Roll no." << roll << endl;
}
class Test
{
protected:
	int sub1;
	int sub2;
public:
	void getMarks();
	void putMarks();
};
void Test::getMarks()
{
	cout << "Enter subject 1 Marks ";
	cin >> sub1;
	cout << "Enter subject 2 Marks ";
	cin >> sub2;
}
void Test::putMarks()
{
	cout << "subject 1=" << sub1 << endl;
	cout << "subject 2=" << sub2 << endl;
}
class Result
{
protected:
	int total;
public:
	void display();
};
void Result::display()
{

}
int main()
{
	Result r1;
	r1.getRoll();
	r1.getMarks();
	r1.getScore();
	r1.display();
	return 0;
}