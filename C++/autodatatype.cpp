#include<iostream>
using namespace std;
int main()
{
    auto a{2}; // interger
    auto b {7.3}; // double
    auto c {7.2f}; //float
    auto d {'d'};  //character
    auto f {"hello"};  // create string - usually array of characters
    auto h {8lu}; // unsigned long
     
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<f<<endl<<h<<endl;
}