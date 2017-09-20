

//#include<stdio.h>
#include"Person.h"
//#include<stdio.h>
#include"dog.h"

using namespace A;
using namespace B;


//using B::Person;
//using A::Dog;
//using A::printVersion;
int main(int argc , char** argv)
{
//	using B::Person;
//	using A::Dog;
//	using A::printVersion;
	Person per;
	per.setWork("sss");
	per.setAge(100);
	per.setName("bily");
	per.printInfo();

	Dog dog;
	dog.setAge(30);
	dog.setName("hello");
	dog.printInfo();


	A::printVersion();
	B::printVersion();

}
