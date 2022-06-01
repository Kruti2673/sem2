#include<iostream>
#include<string>

using namespace std;

class Addition
{
private:
	int a_element;
	int b_element;
public:
	void getdata();
	void displaydata();
	Addition ADD(int a, int b);
};
void Addition::getdata()
{
	cout << "enter a:";
	cin >> a_element;
	cout << "enter b:";
	cin >> b_element;
}
Addition Addition::ADD(int a, int b)
{
	a_element = a;
	b_element= b;  
}
int main()
{
	Addition a(3,4),b(4,5),c;
	a.displaydata();
	b.displaydata();
	c = a.ADD(b);

	return 0;
}