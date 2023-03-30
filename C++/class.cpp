/*
#include<iostream>
using namespace std;
class hey
{
    int x=1111;
  
    protected: int z=3333;
  public: int y=2222;
 void funn()
    {
        cout<<"with in the class   "<<x<<"  "<<y<<"  "<<z<<endl;
    }
};
class pp:public hey
{
    int k=4444;
    public:
    void fun()
    {
       // cin>>k;
    cout<<"this is second class\t"<<"  "<<y<<"  "<<z<<"  "<<k<<endl;
    }
};



int main()
{
    pp k;
    k.funn();
    k.fun();
    return 0;
    

}
*/
#include<iostream>
using namespace std;

class stu
{
    protected:

    int roll;
    float mark;
    string name;
    public:
    void setdata();

};


class past:public stu
{
    protected:
    string qua;
    int std;
    public:
    void past_qualification();
    
};

class show:public past
{
    public:
    void showw();

};


int main()
{
    show s;
    s.setdata();
    s.past_qualification();
    s.showw();
    return 0;

    
}
void past::past_qualification()
{
    cout<<"enter qualification"<<endl;
    cin>>qua;
    cout<<"Enter last Year"<<endl;
    cin>>std;
}

void stu::setdata()
{
    cout<<"enter roll  ";
    cin>>roll;
    cout<<endl<<"Name  ";
    cin>>name;
    cout<<endl<<"current marks  ";
    cin>>mark;
}
void show::showw()
{
    cout<<"\n\n-------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<""<<roll<<"\t"<<name<<"\t  Current Marks   "<<mark<<"\tPast qualification    "<<qua<<"\t Past Year  "<<std<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;

}