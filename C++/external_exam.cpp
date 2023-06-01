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


/*
//				11.Funciton overloading
void over(int i,int j)
{
cout<<"addition is "<<i+j<<endl;
}
void over(double i,double j)
{
cout<<"floating addtion is "<<i+j<<endl;
}
void over(int k)
{
cout<<"square is "<<k*k<<endl;
}
int main()
{
over(2,5);
over(22.1,44.2);
over(5);
return 0;
}
*/


/*
//				12. Operator overloading

class A
{
int value;
public:
A()
{
value=0;
}
void operator ++(int )
{
value=10;
}
void operator ++()
{
value=5;
}
void display()
{
cout<<"value is "<<value<<endl;
}};
int main()
{
A k;
cout<<"original value"<<endl;
k.display();
cout<<"prefix "<<endl;
++k;
k.display();
cout<<"postfix"<<endl;
k++;
k.display();
}
*/

/*
//                                      13.Pure Virtual Funciton and Virtual Class
class Base                  //----->Abstract Class
{   int x;
public:
    virtual void fun()=0;           //----->pure virtule function
    int getx()
    {cout<<"in abstact class "<<endl;return 0;}

};
class Derived:public Base
{
    public:
    void fun()                              //----->rewriting pure virtual function defination, it neccessary 
    {
        cout<<"in dervied class using pure virtual fucntion"<<endl;
    }
};

//Virtula Class
class A                 //----->base class
{
    int a=10;
    protected:int b=20;
    public:int c=30;
        void show()
    {
        cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    }

};
class B:virtual public A            //------>virual public
{
    
};
class C:virtual public A{};         //------>virtual public
class D:public B,public C{
};

int main()
{
    
    Derived b;
    b.fun();
    b.getx();

cout<<endl;
    //Virtual class
    D k;
    k.show();
}
*/

//                                      15.File Handling

#include<fstream>
int main()
{
int rn=1;
float k=55;
string c="pratham Atrigre";
ofstream hello("textfile.txt");
if(hello.is_open)

}