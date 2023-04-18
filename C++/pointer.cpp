#include<iostream>
#include<ios>
int main()
{
    int **hel,*p;
    int k,i{8};
    k=9;
    p=&k;
    hel=&p;
//    std::cout<<&p<<std::endl<<p<<std::endl<<*p<<std::endl;
//std::cout<<"while &k =p  " <<p<<std::endl;
    p=&i;
//std::cout<<"while &i =p  "<<p<<std::endl;
//    std::cout<<&hel<<std::endl<<hel<<std::endl<<*hel<<std::endl<<**hel;

//declaring pointer to char
char *q,char_var{'S'};
q=&char_var;
std::cout<<q<<std::endl;


// initialize with string literal
char *msg {"hello world !"};
std::cout<<msg<<std::endl;
std::cout<<*msg<<std::endl;



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int number {22};
int *pp =&number;
std::cout<<"++++++++++++++++++++++++"<<std::endl;
std::cout<<number<<std::endl;
std::cout<<pp<<std::endl;
std::cout<<&number<<std::endl;
std::cout<<*pp<<std::endl;


}
