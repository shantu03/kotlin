#include<iostream>
//in this program we are going to use permantly dynamic memory allocatin using 'new' operator/funciton
int main()
{
int *p;
p=new int;  //this is going to allocate new 4 byte memnory permanantly (4 byte)
*p=5;
std::cout<<*p<<std::endl;

delete p; 	//to delete permanent allocated memory
std::cout<<*p<<std::endl;

*p=9;
std::cout<<*p<<std::endl;

p=nullptr;
std::cout<<*p;
}


