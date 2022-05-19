#include<iostream>
#include<string.h>
using namespace std;

class CString
{
public:
    char str[20];
public:
    void get_string()
    {
        cout << "Enter String : ";
        cin >> str;
    }
    void display()
    {
        cout << str;
    }
    int operator==(CString& t);   
};
int CString::operator==(CString& t)
{
    for (int i = 0; str[i] != '_'; i++)
    {
        for (int j = 0; t.str[j] != '_'; j++)
        {
            if (str[i] == t.str[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{
    CString str1, str2, str3;
    int result = 0;

    str1.get_string();
    str2.get_string();

    result = str1 == str2;    //Comparing two strings. Overloaded '==' operator
    if (result == 0)
    {
        cout << "\nBoth Strings are Equal";
    }
    else
    {
        cout << "\nBoth Strings are Not Equal";
    }
    cout << "\n";
    return 0;
}