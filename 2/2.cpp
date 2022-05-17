#include<iostream>
using namespace std;

long add(long a, long b)
{
    cout << "sum=" << a + b << endl;
    return a + b;
}
float add(float a, float b)
{
    cout << "sum=" << a + b << endl;
    return a + b;
}

int main()
{
    cout << "addition is:" << add(5, 6) << endl;
    cout << "addition is:" << add(5.8, 9.6) << endl;
    return 0;
}