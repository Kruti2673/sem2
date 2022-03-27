#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
        msg.push_back("dsd");
    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cout << endl;
}