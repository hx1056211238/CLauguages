#include<iostream>


int addOne(int a)
{
	a =a+1;
	return a;
}



int add_One(int *a)
{

	int b;
	*a= *a+1;
	return *a; 
}


int addOneDef(int &b)
{
	b = b+1;
	return b;
}
using namespace std;
int main(int arc ,char** argv)
{
 int a =99;
cout<<addOne(a)<<endl;

cout<<a<<endl;
	
cout<<add_One(&a)<<endl;
cout<<a<<endl;

cout <<addOneDef(a)<<endl;
cout<<a<<endl;
}
