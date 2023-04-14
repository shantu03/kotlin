#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    int r;
  srand( time(NULL));
    for(int i=0;i<10;i++)
    {
     
    r=rand()%24+1;
    cout<<r<<endl;
    
    }
}