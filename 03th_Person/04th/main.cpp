

//#include<stdio.h>
#include"Person.h"
//#include<stdio.h>
#include"dog.h"
int main(int argc , char** argv)
{
	B::Person per;
	per.setName("bily");
	per.printInfo();

	A::Dog dog;
	dog.setName("hello");
	dog.printInfo();


	A::printVersion();
	B::printVersion();

}
