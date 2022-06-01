#include<iostream>

using namespace std;

class publication
{
public:
	char title;
	float price;
	void getdata1()
	{
		cout << "enter title:" ;;
		cin >> title;
		cout << "enter price:";
		cin >> price;
	}
	void displaydata1()
	{
		cout << title<<endl;
		cout << price<<endl;
	}
};
class book
{
public:
	int page_count;
	void getdata2()
	{
		cout << "enter page_count";
		cin >> page_count;
	}
	void displaydata2()
	{
		cout << page_count << endl;
	}
};
class tape
{
public:
	float tape_playing_time;
	void getdata3()
	{
		cout << "enter tap playing time in minutes:";
		cin >> tape_playing_time;
	}
	void displaydata3()
	{
		cout << tape_playing_time << endl;;
	}

};

int main()
{
	publication p;
	p.getdata1();
	p.displaydata1();

	book b;
	b.getdata2();
	b.displaydata2();

	tape t;
	t.getdata3();
	t.displaydata3();
	return 0;
}