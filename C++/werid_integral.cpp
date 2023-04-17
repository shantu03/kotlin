#include<iostream>
using namespace std;

int main()
{
short int k;
short int t;
cin>>k>>t;
cout<<sizeof(k)<<"\t"<<sizeof(t)<<endl;
auto p=k+t;
cout<<p<<endl;
cout<<sizeof(p)<<endl;
}
