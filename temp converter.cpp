//Task 3. Temperature Converter
#include<iostream>
using namespace std;
int main()
{   int ch;
float temp=0,ntemp=0;
cout<<"WELOCOME TO TEMPERATURE CONVERTER"<<endl;
cout<<"1.CELCIUS TO FAHRENHEIT"<<endl<<"2.FAHRENHEIT TO CELCIUS"<<endl;
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"ENTER TEMPERATURE IN CELCIUS : ";
cin>>temp;
ntemp=(9.0/5.0*temp)+32;
cout<<"TEMPERETURE IN FAHRENHEIT : "<<ntemp<<endl;
break;
}
case 2:
{
cout<<"ENTER TEMPERATURE IN FAHRENHEIT : ";
cin>>temp;
ntemp=(temp-32)*(5.0/9.0);
cout<<"TEMPERETURE IN CELCIUS : "<<ntemp<<endl;
break;
}
default:
{
cout<<"ALLAH HAFIZ!"<<endl;
break;
}
}
return 0;
}


