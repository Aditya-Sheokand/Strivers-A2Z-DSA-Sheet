#include <bits/stdc++.h>
using namespace std;
string compareNM(int n, int m)
{

    if (n <= m)
    {
        if (n == m)
        {
            return "equal";
        }
        return "lesser";
    }

    // else if(n=m)
    // {
    //    return "equal";
    // }

    else
    {
        return "greater";
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    string res = compareNM(n, m);
    cout << res << endl;
    return 0;
}