#include<iostream>
using namespace std;

int main()
{
short int k;
short int t;

char s {3};
char l  {7};
cin>>k>>t;
cout<<"size of variable (short int)"<<endl;
cout<<sizeof(k)<<"\t"<<sizeof(t)<<endl;
auto p=k+t;
;

cout<<"result " <<p<<endl;
cout<<"size of p(int additon ) is " <<sizeof(p)<<endl;
cout<<endl;
auto j= s+l;
cout<<"result of char "<<j<<"  size of j (char additon ) is   "<<sizeof(j)<<endl;
}
