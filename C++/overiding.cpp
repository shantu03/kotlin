/* Overriding is concept of Run-time Polymorphism */
#include<iostream>
using namespace std;
class baseclass
{
public:
void add()
{
int a,b;
cin>>a>>b;
cout<<a+b<<endl;
}
};

class derived:public baseclass
{
public:
void add()   // Here above function was overwitten by this function
{
float a,b;
cin>>a>>b;
cout<<"in Float  "<<a+b<<endl;
}
};
int main()
{
derived s;
s.add();
return 0;
}
