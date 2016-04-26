// Damping.cpp : Aingaran Elango
// To calculate damping ratio from amplitude of oscillation

#include<iostream>
#include<conio.h>
#include <math.h> 

using namespace std;

int main()
{
	long double A1,A2,damping,lA;
	cout<<"Enter the amplitudes A1 and A2"<<endl;
	cin>>A1>>A2;
	lA=log(A1/A2);
	damping=(lA/(sqrt(((6.28)*(6.28))+(lA*lA))));
	cout<<"damping ratio is "<<damping<<endl;
	//getch();
	return(0);
} 
