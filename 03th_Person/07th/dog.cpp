#include "dog.h"
#include <iostream>
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
	std::cout<<"this dog name :"<<name<<"and age is :"<<age<<std::endl;
//	printf("this dog name = %s ,age = %d\n",name,age);
}

void printVersion(void)
{
	std::cout<<"this veison id dog vesion "<<std::endl;	
//	printf("this version is Dog Veriosn \n");
}
}

