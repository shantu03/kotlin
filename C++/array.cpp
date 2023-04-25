#include<iostream>
#include<unistd.h>
#include<time.h>
using namespace std;
int main()
{
/*
    int a[20]={1,2,3,4,5};
    int k;
    cout<<"enter elements of array  ";
    cin>>k;
    srand((unsigned)time(NULL));
    int aa[k];
    for(int i=0;i<k;i++)
    {
        aa[i]=rand()%100;
        cout<< i+1 <<": " <<aa[i]<<endl;
    }
    char x='J';
    cout<<(int)x;
    return 0;
*/

//11::56::42  --> Dynamic array allocation 
size_t size{10};
double *po {new double [size]};	//all value initilized to 0

int *poo {new(nothrow) int [size+1000000]{1,2,3,4,5}};

if(poo)
{

for(size_t i{0};i<size;i++)
{

cout<<"\t"<<*(poo+i)<<endl;
usleep(150000);		//--> usleep is same as sleep but it measure in microseconds 
}
}
else
cout<<"array allocation failed"<<endl;

delete[] po;		//----> to delete po array 
delete[] poo;			//same as releasing memnory of array
 po= nullptr;
poo =nullptr;		//Just becoause we are good C++ programmer


/* 
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

for(--:--) used for check size or print sizeth time statement checkot follows code for your information 
cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
int hu[size+2];
int k=1;


for( int temp : hu)
{
cout<<k<<"\t";k++;
cout<<temp<<endl;
}


*/




}
