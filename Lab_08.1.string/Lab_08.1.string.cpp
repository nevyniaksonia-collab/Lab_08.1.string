#include <iostream>
#include <string>
using namespace std;

int Count(string s)
{
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find("no", pos)) != string::npos)
    {
        k++;
        pos++;
    }

    pos = 0;
    while ((pos = s.find("on", pos)) != string::npos)
    {
        k++;
        pos++;
    }

    return k;
}

string Replace(string s)
{
    size_t pos = 0;
    while ((pos = s.find("no", pos)) != string::npos)
    {
        s.replace(pos, 2, "***");
        pos += 3;
    }

    pos = 0;
    while ((pos = s.find("on", pos)) != string::npos)
    {
        s.replace(pos, 2, "***");
        pos += 3;
    }

    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int pairs = Count(str);
    if (pairs > 0)
    {
        cout << "String contained " << pairs << " groups of 'no' or 'on'" << endl;

        string dest = Replace(str);
        cout << "Modified string (param) : " << str << endl;
        cout << "Modified string (result): " << dest << endl;
    }
    else
    {
        cout << "No 'no' or 'on' found" << endl;
    }

    return 0;
}

