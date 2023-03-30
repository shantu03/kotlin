#include<iostream>
using namespace std;
struct              //here giving structure name is not mandatary; but you have to define just after structure defination 
{
    int a;
    int b;
    void hello()           //we can define function under structure
    {
        cout<<"this is inside fun"<<endl;
    }
}s,p,j;                     //this is example for above line

int main()
{
    
   cin>>s.a>>s.b;
    cin>>p.a>>p.b;
    cin>>j.a>>j.b;
    cout<<s.a<<" "<<s.b<<endl;
  
    cout<<j.a<<" "<<j.b<<endl;
    s.hello();
    return 0;

}