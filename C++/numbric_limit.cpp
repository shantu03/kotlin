#include<iostream>
#include<limits>

using namespace std;

int main()
{
    cout<<"for integer"<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max()<<endl;
	
	cout<<"for double"<<numeric_limits<double>::min()<<" to "<<numeric_limits<double>::max()<<endl;
	cout<<"for float"<<numeric_limits<float>::min()<<" to "<<numeric_limits<float>::max()<<endl;

 	   cout<<"in digit float "<<numeric_limits<float>::digits<<endl;
    cout<<"in digit double"<<numeric_limits<double>::digits<<endl;
    
   cout<<"in digit int"<<numeric_limits<int>::digits<<endl;
    return 0;
}
