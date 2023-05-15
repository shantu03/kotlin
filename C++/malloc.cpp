#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char *ptr =(char *)calloc(n,sizeof(char));
    for(size_t i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    for(size_t i=0;i<n;i++)
    {
        cout<<*(ptr+i);
    }

}