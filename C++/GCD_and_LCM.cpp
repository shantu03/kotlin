//Greatest Comman Divisor
#include<iostream>
using namespace std;

int main()
{
    /*
    //GCD
    cout<<"enter Two Numbers"<<endl;
    int p1,p2;
    cin>>p1>>p2;
    int k,he;
    if(p1>p2)
    he=p2;
    else
    he=p1;
    int div;
    for(size_t i {2};i<=he;i++)
    {
        if((p1%i==0)&&(p2%i==0))
            div=i;
    }
    cout<<div<<endl;
    return 0;
    
  int n1, n2;

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  
  while(n1 != n2) {
    if(n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
  }

  cout << "HCF = " << n1;

  */


 //Lowest Comman Multiple

  int num1,num2,max;
  cout<<"enter two number to find LCM"<<endl;
  cin>>num1>>num2;
  max= (num1>num2)? num1 : num2;
  
  while(true)
  {
    if(max%num1==0 && max% num2==0)
    {
      cout<<max<<endl;
      break;
    }
    else
    max++;
  }
    
  return 0;
}
