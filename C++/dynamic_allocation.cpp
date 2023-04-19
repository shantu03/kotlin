#include<iostream>
//in this program we are going to use permantly dynamic memory allocatin using 'new' operator/funciton
int main()
{
int *p;
// ----> Dynamic Allocation 
p=new int;  //this is going to allocate new 4 byte memnory permanantly (4 byte)
*p=5;
std::cout<<*p<<std::endl;

delete p; 	//to delete permanent allocated memory
//delete p;	if you delete memory twice ,below statements are not going to work (core dumped error occur)
std::cout<<*p<<std::endl;

*p=9;
std::cout<<*p<<std::endl;

p=nullptr; 
std::cout<<p<<std::endl;


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
std::cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl<<std::endl;
//----> Dangling Problems example

//1] Uninitilized Pointer
int *ptr;  //now this random address is stored so by modifying this address(by putting value in it) can crash program

//2]deleted Pointer 

int k {69};
ptr=&k;
std::cout<<"here we can access *ptr:  "<<*ptr<<std::endl;

//delete ptr;  ---> this is going to throw error on face (Dangling Problem)
//std::cout<<*ptr<<std::endl;

//3] Multiple pointer pointing to same address or deleted address

int *ptr_1 {new int {9}};
int *ptr_2 {ptr_1};
std::cout<<"before :   "<<ptr_2<<"   "<<*ptr_2<<std::endl; 

delete ptr_1;

std::cout<<"after :    "<<ptr_2<<"   "<<*ptr_2<<std::endl;
}


