#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>=b && a<c || a<b && b>c || a>b && b>=c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}