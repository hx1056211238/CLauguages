


#include <stdio.h>
#include "Person.h"
namespace B
{
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
	printf("name = %s ,age = %d ,work = % ",name,age,work);
}
void printVersion(void)
{
	printf("this is PersonVersion\n");
}
}
