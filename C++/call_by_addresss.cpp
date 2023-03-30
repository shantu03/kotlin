#include<iostream>
using namespace std;
void swap(int *x,int *y)             //here we can also do swap(int &x,int &y)---check below also for actual parameter
{                                   //directly save value of a in x,  and value of b in y
    int temp;
    temp=*x;                           //temp=x 
    *x=*y;                             //x=y
    *y=temp;                           //y=temp
}
int main()
{
    int a=4,b=8;
        cout<<"a =" <<a<<"  b ="<<b<<endl;
    swap(&a,&b);                //actule paramerter which is passed is swap(a,b) 
    cout<<"a =" <<a<<"  b ="<<b<<endl;
    return 0;
}
