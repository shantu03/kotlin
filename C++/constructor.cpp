/*
#include<iostream>
using namespace std;
class defaultt
{
    public:
    defaultt()
    {
        cout<<"----------------------------------------"<<endl;
        cout<<"Constructor has been created"<<endl;
    }

    ~defaultt()
    {
        cout<<"defalut Constructor has been deleted"<<endl;
        cout<<"----------------------------------------"<<endl;
    }
};
class para
{
    int x;
    int y;
    public:
    para(int x=1,int y=1)
    {
        cout<<"para constructor created \nx=  "<<x<<"\ty=  "<<y;
    }
    ~para()
    {
        cout<<"\nConstructor has been deleted"<<endl;                 //destructor nott have parameters
    }
    void setdata()
    {
        cin>>x>>y;
    }
};
int main()
{
    defaultt p;
    para k(4,6);                                //this is parametrized constructor; if value is not pass , then default values are used

    return 0;
}
*/

#include<iostream>
using namespace std;
class cons
{
int a,b;
public:
cons()
{
cout<<"Constructor is created"<<endl;
cin>>a>>b;
}
~cons()
{

cout<<"the value is "<<a<<"  "<<b<<endl;
cout<<"Constructor is Deleted"<<endl;
}
};
int main()
{
cons a;
return 0;
}
