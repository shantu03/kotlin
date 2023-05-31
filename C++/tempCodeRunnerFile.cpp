#include<iostream>
using namespace std;
/*
//                                      2.   INLINE FUNCTION
void defun(int x=1,y=1)		//--function overloading
{
return(x+b);
}
inline void fun(int a, int b)		//-->inline function
{
while(a)
{
    a=-b;
}   
}
int main()
{
    int k=9,j=1;
    cout<<fun(9,1)<<endl;		//-->inline function

defun(10);			//--->function overloading	
defun(15,15);			//---->funciton overloading
}

*/






/*
//                                      3. Constructor Types
//Copy Constructor

class first{		//--->copy constructor
int a;
int b;
public:
first(int k,int j)
{
a=k;
b=j;
cout<<"first constructor created"<<endl;
}
first(first &t)
{
cout<<endl<<t.a<<"\t"<<t.b<<endl;
}
};
class cctype		//---->default and parameterized and constructor overloading
{
public:
cctype(char kk= '*',int count = 3)
{
while(count)
{
cout<<kk;
count--;
}
cout<<endl;
}
};

int main()
{
cout<<"copy construcor:-"<<endl;
first s(9,8);		//-->copy constructor
first manjeet (s);	//-->copy constructor
cout<<endl<<"default constructor:-"<<endl;
cctype k;
cout<<endl<<"parameterized constructor:-"<<endl;
cctype kk('#',5);
}
*/





/*
//					4.Friend Function
class basea
{
int a=111;
protected:
int b=222;
public:
int c=333;

friend void ravi(basea);
};
void ravi (basea t)
{
cout<<t.a<<"\t"<<t.b<<"\t"<<t.c<<endl;
}
int main()
{
basea A;
ravi(A);
}
*/


/*
//				5.Friend Class with friend function
class A{
int a=11;
protected: int b=22;
public: int c=33;

friend void ravi(A);			//----->friend function
friend class B;				//----->friend class
};
void ravi(A p)		//---->friend fumction
{
cout<<p.a<<"\t"<<p.b<<"\t"<<p.c<<endl;
}

class B
{
public:
void showdata(A &p)
{
p.a*=100;
p.b*=100;
p.c*=100;
}
};
int main()
{
A ele;
B obj;
ravi(ele);			//----->friend function
obj.showdata(ele);		//------>friend class calling
ravi(ele);			//--->friend function
}

*/

/*
//				10. Static Function and static variable

class A
{
static int num;
public:
static void msg()		//----> Static Function 
{
cout<<"inside of static function and value is  "<<num<<endl;
}

};
int A::num=10;
int main()
{
A::msg();
}
*/

//


//				11.Funciton overloading
void over(char ='#',int =3);
int main()
{
over();
over('&',5);
return 0;
}
void over(char k,int count)
{
for(int i=0;i<count;i++)
{
cout<<k;
}
cout<<endl;
}
