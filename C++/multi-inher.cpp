#include<iostream>
using namespace std;
class father
{
protected:
int x;
int y;
public:
father()
{
cout<<"inside the father class"<<endl;
}
};
class mother
{
protected:
int a;
int b;
public:
mother()
{
cout<<"inside the mother class"<<endl;

}
};
class child:public mother,public father
{
public:
child()
{
cout<<"inside the child class"<<endl;
}
void msg()
{
cout<<"enter the value"<<endl;
cin>>a>>b>>x>>y;
cout<<endl<<a<<b<<x<<y;
}
};
int main()
{
child s1;
s1.msg();
return 0;
}
