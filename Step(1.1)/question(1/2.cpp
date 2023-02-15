#include <bits/stdc++.h>
using namespace std;

int dataType(string str)
{
    if (str == "Character")
    {
        return sizeof(char);
    }
    else if (str == "Long")
    {
        return sizeof(long);
    }
    else if (str == "Float")
    {
        return sizeof(float);
    }
    else if (str == "Integer")
    {
        return sizeof(int);
    }
    else
       
        {
            return sizeof(double);
        }
}
int main()
{
    string str;
    cin >> str;

    cout<<dataType(str);
    return 0;
}