#include<iostream>
using namespace std;
class SimpleInterest
{
private:
	double p;
	int n;
	static double r;

public:
	void detdata();
	double calculateSI();
	static void changerateofInterest(double rate)
	{
		r = rate;
	}
};
double SimpleInterest::r = 8.25;

void SimpleInterest::detdata()
{
	cout << "enter principal:";
	cin >> p;
	cout << "enter no of year:";
	cin >> n;
}
double SimpleInterest::calculateSI()
{
	return (p * n * r) / 100.0;
}
int main()
{
	SimpleInterest s1;
	s1.detdata();
	SimpleInterest s2;
	s2.detdata();
	double rate;
	cout << "enter change in rate of Interest:";
	cin >> rate;
	SimpleInterest::changerateofInterest(rate);
	cout << "simple Interest:" << s1.calculateSI() << endl;
	cout << "simple Interest:" << s2.calculateSI() << endl;
	SimpleInterest s3;
	s3.detdata();
	SimpleInterest s4;
	s4.detdata();
	cout << "enter change in rate of Interest:";
	cin >> rate;
	SimpleInterest::changerateofInterest(rate);
	cout << "simple Interest:" << s3.calculateSI() << endl;
	cout << "simple Interest:" << s4.calculateSI() << endl;

	return 0;
}