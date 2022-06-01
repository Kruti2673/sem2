#include<iostream>
using namespace std;
class A
{
    int a ;
    int b;
public:
    void getdata()
    {
        cout << "Enter a:";
        cin >> a;
        cout << "Entre b:";
        cin >> b;
    }
    int mul()
    {
        int c = a * b;
        return c;
    }
};
class B : private A
{
public:
    void display()
    {
        int result = mul();
        std::cout << "Multiplication of a and b is : " << result << std::endl;
    }
};
int main()
{
    B b;
    b.display();
    return 0;
}