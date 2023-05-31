/*
#include<iostream>
using namespace std;
class t
{
protected:
int x=3;
public:
int y;
void show()
{
//cout<<x<<" "<<y<<endl;
}
};
class k:public t
{
public:
int z;
void get()
{
cin>>x>>y>>z;
}
void dk()
{
cout<<x<<" "<<y<<" "<<z<<endl;
}
};
int main()
{
k sh;
sh.get();
sh.dk();
return 0;
}
*/

/*
#include<iostream>
using namespace std;
class firs
{
public :
int a=1,b=2;
firs()
{
cout<<"firs constructor createrd :  "<<a<<" "<<b<<endl;
}
};
class seco:public firs
{
public:
int c=3;
seco()
{
cout<<"seco constructor created :  "<<a<<" "<<b<<" "<<c<<endl;
}
};
int main()
{
seco p;
return 0;
}

*/


// trying various things like loop of inherritance class
#include<iostream>
using namespace std;
using namespace std;
class firs
{
public :
int a=1,b=2;
firs()
{
cout<<"firs constructor createrd :  "<<a<<" "<<b<<endl;
}~firs()
{
    cout<<"Destructor is here"<<endl;
}
};

class seco:public firs
{
public:
int c=3;
seco()
{
cout<<"seco constructor created :  "<<a<<" "<<b<<" "<<c<<endl;
}
~seco()
{
    cout<<"destructor of second class "<<endl;
}
};
int main()
{
seco p[2];
return 0;
}
