#include<iostream>
#include<ios>
#include<iomanip>
int main()
{
std::cout<<std::endl;
std::cout<<"INTERNAL JUSTIFIED : " <<std::endl;
std::cout<<std::right;
std::cout<<std::setw(10)<<-125.45<<std::endl;
std::cout<<std::right;
 std::cout<<std::setw(10)<<"-125.45"<<std::endl;
}