/* here we are going to lear 1st type of polymorphism (compile 
time ;which is also known as overloading*/

#include<iostream>
using namespace std;
/*
constructor overload
- here if object is called/declared with parameter then only 
parametrized constructor will be called; else default constructor
*/
class constructor_overload
{
public:
constructor_overload()
{
cout<<"default overload of constructor"<<endl;
}
constructor_overload(int a)
{
cout<<a<<"  "<<"parametrized  constructor"<<endl;
}
};



class function_overload
{
int a,b;
public:
void add()
{
cout<<"default function  "<<a+b<<endl;
}
void add(int x,int y)
{
cout<<"interger fucntion  "<<x+y<<endl;
}
void add(double k,double p)
{
cout<<"float fuction  "<<k+p<<endl;
}

};

int main()
{
    /*  -- Constructor overload
int aa;
constructor_overload a;  // default calling constructor
cin>>aa;
constructor_overload ab(aa);
*/


/*    --- function overload
function_overload j;
cin>>t>>l;
j.add();
j.add(7,3);
j.add(7.7,3.1);
*/

return 0;
}
