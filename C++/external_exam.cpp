#include<iostream>
using namespace std;
inline void fun(int a, int b)
{
while(a)
{
    a=-b;
}   
}
int main()
{
    int k=9,j=1;
    cout<<fun(9,1)<<endl;
}