

#include <iostream>
//#include <stdio.h>
#include "Person.h"
namespace B
{
using namespace std;
void Person::setName(char* name)
{
	this->name = name;
}

int  Person::setAge(int age)
{
	this->age = age;
}

void Person::setWork(char *work)
{
	this->work = work;
}

void Person::printInfo(void)
{
	cout<<"name = "<<name<<"age = "<<age<<"work = "<<work<<endl;
//	printf("name = %s ,age = %d ,work = % ",name,age,work);
}
void printVersion(void)
{
	cout<<"this is personVerson"<<endl;
//	printf("this is PersonVersion\n");
}
}
