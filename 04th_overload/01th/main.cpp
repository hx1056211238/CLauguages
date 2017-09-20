

#include <iostream>


using namespace std;

int add(int a,int b)
{
	cout<<"add int + int "<<endl;
	return a+b;
}

int add(int a,int b,int c)
{
	cout<<"add inta+intb+intc"<<endl;
	return a+b+c;
}

double add(double a,int b)
{
	cout<<"add inta +intb return"<<endl;
}

int main(int argc ,char** argv)
{
	add(1,2);
	add(3,4,5);
	add(2,3);
	
}
