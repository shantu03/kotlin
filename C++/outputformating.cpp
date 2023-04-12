#include<iostream>
#include<ios>
#include<iomanip>       //setpreccision() & setw()
int main()
{
    int col_width {14};
std::cout<<std::endl;
std::cout<<"INTERNAL JUSTIFIED : " <<std::endl;
 std::cout<<std::internal;
     std::cout << std::setw(8) << -123.45 << std::endl;

     std::cout << "This is a nice message...." << std::endl << std::flush;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 std::cout<<std::setw(80)<<"This is fun "<<std::endl;
 std::cout<<std::setw(100)<<"--------------------------------------------------------"<<std::endl;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    std::cout<<"this is right  side "<<std::endl; //defalut side is right side
     std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    std::cout<<std::endl;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
std::cout<<"this is left side "<<std::endl;
std::cout<<std::left;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
std::cout<<"table with fill character right side "<<std::endl;

  std::cout << std::right;
    std::cout << std::setfill('_'); // The fill character
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
std::cout<<std::endl<<std::endl;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    std::cout<<"table with fill character on left"<<std::endl;
    std::cout<<std::left;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
std::cout<<std::endl<<std::endl;


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//showpos and noshowpos
int a=3;
int b=-3;
std::cout<<"with showpos :"<<std::endl;
std::cout<<std::showpos;
std::cout<<a<<std::endl;
std::cout<<b<<std::endl<<std::endl;

std::cout<<"without showpos :"<<std::endl;
std::cout<<std::noshowpos;
std::cout<<a<<std::endl;
std::cout<<b<<std::endl<<std::endl;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//std::dec, std::oct , std::hex

int k {1234};
std::cout<<"different number systen "<<std::endl;
std::cout<<"in octal "<<std::oct<<k<<std::endl;
std::cout<<"in decimal "<<std::dec<<k<<std::endl;
std::cout<<"in Hexa  "<<std::hex<<k<<std::endl;
// Uppercase format
std::cout<<"in upper case format  of hex  "<<std::uppercase<<std::hex<<k<<std::endl<<std::endl<<std::endl;


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//fixed and scientific : for floating point values
    
    double aa{ 3.14159265000358979320003846264338300005 };
    double bb{ 2006.0 };
    double cc{ 1.34e-10 };
    
    using namespace std;
    cout<<"default :"<<endl;
    cout<<aa<<endl;
    cout<<bb<<endl;
    cout<<cc<<endl;
    cout<<"\n\nFIxed value :\n";
    
    cout<<fixed;
     cout<<aa<<endl;
    cout<<bb<<endl;
    cout<<cc<<endl;

    cout<<"\n\n Scintific value \n";
    cout<<scientific;
    cout<<aa<<endl;
    cout<<bb<<endl;
    cout<<cc<<endl;

    cout<<"\n\nsetting default value (cout.unsetf(ios::scientific | ios :: fixed ))\n";
    cout.unsetf(ios::scientific | ios :: fixed);
    cout<<aa<<endl;
    cout<<bb<<endl;
    cout<<cc<<endl;


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

cout<<"-------------------------------------------------------------------------------"<<endl;

cout<<"\ndefault value :";
cout<<aa<<endl;
cout<<"precision(12):\t";
cout<<setprecision(12);
cout<<aa<<endl;
cout<<setprecision(30);         //If the precision is bigger than supported by the type, you'll just print garbage.
cout<<"precision(50) :\t";
cout<<aa<<endl;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

cout<<"\n\n:";
double y {88.9};
double z {1.1};
double x {122};
cout<<showpoint;
cout<<"with showpoint : \n";
cout<<y<<endl;
cout<<z<<endl;
cout<<x<<endl<<endl;
cout<<"default (noshowpoint):"<<endl;
cout<<noshowpoint;
cout<<y<<endl;
cout<<z<<endl;
cout<<x<<endl;

return 0;
}