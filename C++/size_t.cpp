#include<iostream>

int main()
{
size_t k {7};

for(size_t i=0;i<k;i++)
{
std::cout<<i<<std::endl;
}
std::cout<<"the actual size max is "<<SIZE_MAX/8/1024/1024/1024/1024<<std::endl; //memory size
}

