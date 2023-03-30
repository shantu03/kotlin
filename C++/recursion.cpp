#include<iostream>
using namespace std;
int main()
{
    int fact(int );
    int a,b;
    cin>>a;
    b=fact(a);
    cout<<"factorial is  "<<b;
    return 0;
}
int fact (int t)
{
    if(t<0)
    return(-1);
    else 
    if(t==0)
    return (1);
    else
    {
        t=t*fact(t-1);
    }
}