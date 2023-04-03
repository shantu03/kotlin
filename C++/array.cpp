#include<iostream>

#include<time.h>
using namespace std;
int main()
{
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
}