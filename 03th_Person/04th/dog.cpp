#include "dog.h"

//#include<stdio.h>
namespace A
{
void Dog::setName(char *nam)
{
	this->name = nam;
}

void Dog::setAge(int age)
{
	this->age =age;
}

void Dog::printInfo(void)
{
	printf("this dog name = %s ,age = %d\n",name,age);
}

void printVersion(void)
{
	printf("this version is Dog Veriosn \n");
}
}

