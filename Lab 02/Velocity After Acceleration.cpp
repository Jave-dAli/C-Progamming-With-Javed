#include <iostream>

using namespace std;
int main()
{
float velocity, acceleration, final_velocity;
cout<<"FINAL VELOCITY = initialVELOCITY + acceleration\n\n";
cout<<"Enter initial velocity: ";
cin>>velocity;
cout<<"\nEnter acceleration: ";
cin>>acceleration;
final_velocity = velocity + acceleration;
cout<<"\n\nFinal Velocity is "<<final_velocity;

return 0;
}

