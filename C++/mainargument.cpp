#include<iostream>
using namespace std;
int main(int k,char **p)
{
cout<<k<<endl;
int pp;
for(int i=0;i<k;i++)
{
    cout<<p[i]<<endl;
}
}

/* This program is for check main function argument
and we have learned that we can pass argument(msg) while 
opening the file interminal 
i.e.

//the first argument will be name/location of the function 

./mainargument.exe hello word
OR              --both output will be different so check it out.
./mainargument.exe "hello word "*/
