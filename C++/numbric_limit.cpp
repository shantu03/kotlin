#include<iostream>
#include<limits>

using namespace std;

int main()
{
    cout<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max()<<endl;
    
    cout<<"in digit "<<numeric_limits<float>::digits<<endl;
    cout<<"in digit double"<<numeric_limits<double>::digits<<endl;
    
   cout<<"in digit int"<<numeric_limits<int>::digits<<endl;
    return 0;
}
