#include<iostream>
int main()
{
    /*
    
    first methodto get new operator error   int * data= new int [100000000000] ;

  1st method to get new operator error  for(size_t i{0};i<1000000;i++)
    {
        int * pp =new int [10000000];
    }
    std::cout<<"this is good"<<std::endl;
*/

//--> Try & Catch operator this operator help us to understand certain code fail or not 

 try {
int * data = new int [1000000000];   // in Try Bracket statememt will tested if error occured then--
}
catch(std::exception& ex)	//then catch funciton going to catch the error with exception and put in & ex which is accessed downside
{
std::cout<<" Error occured here" <<ex.what()<<std::endl;   	//ex.what() explain what  error occured in statement 
}
// if no error occured then compiler going to ignore catch  fuction

std::cout<<"End Of the Program "<<std::endl;
    return 0;
}
