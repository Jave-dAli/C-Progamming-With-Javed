#include <iostream>

using namespace std;
int main()
{
float English, Maths, Physics, Biology, Psychology, Total, Percentage;
cout<<"Enter your marks and I'll total it and give you percentage...\n\n"<<"Enter English marks: ";
cin>>English;
cout<<"\nEnter Maths marks ";
cin>>Maths;
cout<<"\nEnter Physics marks: ";
cin>>Physics;
cout<<"\nEnter Biology marks: ";
cin>>Biology;
cout<<"\nEnter Psychology marks: ";
cin>>Psychology;

Total = English+Maths+Physics+Biology+Psychology;
cout<<"\nObtained marks: "<<Total<<endl;
Percentage = (Total/500)*100;
cout<<"Percentage: "<<Percentage;


return 0;
}

