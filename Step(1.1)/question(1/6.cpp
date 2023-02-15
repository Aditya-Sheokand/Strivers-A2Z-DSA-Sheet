#include <bits/stdc++.h>
using namespace std;

void isPrime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
  

}

    
    int main()
    {
        int n;
        cin >> n;
        isPrime(n);
        return 0;
    }