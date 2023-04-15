#include<iostream>
#include<cmath>

using namespace std;
int main()
{
double w {8.89};
cout<<"weight rounded to floor is "<<floor(w)<<endl;  //this going to round back to the number
cout<<"weight rounded ot ceil is "<<ceil(w)<<endl;   //this goingg to round front the number
cout<<"the round of 5.542 is : "<<round(5.542)<<endl;  //this work perfectly round form the half

cout<<endl;

cout<<"the exponential of 10 is: "<<exp(10.4)<<endl<<endl;

cout<<"the power of 2 ^ 4 is "<<pow(2,4)<<endl<<endl;

cout<<"the log of 10 is "<<log(10)<<endl; // By default the fuction in base e= 2.71828
cout<<"the log2 of 10 is "<<log2(10)<<endl;
cout<<"the log10 of 10 is "<<log10(10)<<endl<<endl;

cout<<"the sin of 10 is "<<sin(10)<<endl;
cout<<"the cos of 10 is "<<cos(10)<<endl;
cout<<"the tan of 10 is "<<tan(10)<<endl<<endl;

cout<<"square root of 81 is : "<<sqrt(81)<<endl;

return 0;
}
