#include<iostream>
int main()
{
    int **hel,*p;
    int k;
    k=9;
    p=&k;
    hel=&p;
  //  std::cout<<*p<<std::endl;
    std::cout<<&hel<<std::endl<<hel<<std::endl<<*hel<<std::endl<<**hel;
}