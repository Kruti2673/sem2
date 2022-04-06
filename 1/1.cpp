#include<iostream>
using namespace std;

inline int cube(int n)
{
    return n * n * n;
}
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;

        int c = cube(n);
        cout << "cube=" << c << endl;
 
    return 0;
}