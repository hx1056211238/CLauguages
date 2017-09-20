

//#include<stdio.h>
#include"Person.h"
//#include<stdio.h>
#include"dog.h"


//using B::Person;
//using A::Dog;
//using A::printVersion;
int main(int argc , char** argv)
{
	using B::Person;
	using A::Dog;
	using A::printVersion;
	Person per;
	per.setName("bily");
	per.printInfo();

	Dog dog;
	dog.setName("hello");
	dog.printInfo();


	printVersion();
	B::printVersion();

}
