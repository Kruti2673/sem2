#include<iostream>

using namespace std;

class circle
{
    double radius;
    double area;
public:
    circle(double);
    void display();
    double operator==(circle c1);
};

circle::circle(double radius)
{
    cout << "radius=" << radius << endl;
    area = 3.14 * (radius * radius);
}
void circle::display()
{
    cout << "area=" << area << endl;
}
double circle::operator==(circle c1)
{
    if (radius == c1.radius)
        return 1;
    else
        return 0;
}

int main()
{
    circle c1(2);
    c1.display();
    circle c2(3);
    c2.display();
    cout << "\n";
  
    if (c1 == c2)
        cout << "they are equal in radius";
    else
        cout << "not equal";
    cout << "\n";
    return 0;
}
