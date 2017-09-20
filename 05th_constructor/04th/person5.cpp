
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Person
{
private:
	char *name;
	int age;
	char *work;
public:
	Person()
	{
		name = NULL;
		work = NULL;
	}
	void setName(char *name)
	{
		this->name = name;
	}

	void setAge(int age)
	{
		this->age = age;
	}

	void setWork(char *work)	
	{
		this->work = work;
	}
	
	Person(char *name)
	{
		this->name = new char[strlen(name)+1];
		strcpy(this->name,name);
		this->work = NULL;
	}
	Person(char *name,int age,char *work = "none")
	{
		this->age =age;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name,name);
		this->work = new char[strlen(work)+1];
		strcpy(this->work,work);
	}
	~Person()
	{
		if(this->name) delete this->name;
		if(this->work) delete  this->work;
	}
	void printInfo(void);
};

void Person::printInfo(void)
{
	cout<<"this name = "<<name <<",age="<<age<<",work="<<work<<endl;
}

void test_fun()
{
	Person per("zhangsan",13);
	Person per2;
	Person per3();
	Person *per4 = new Person;
	Person *per5 = new Person();

	Person *per6 = new Person[2];
	Person *per7 = new Person("lisi",19 ,"student");
	Person *per8 = new Person("wangwu",1);

//	per.printInfo();
//	per7->printInfo();
//	per8->printInfo();

	delete per4;
	delete per5;
	delete []per6;
	delete per7;
	delete per8;
}
int main(int argc,char **argv)
{

	unsigned long i;
	for(i =0;i<1000000;i++)
	{
		test_fun();
//		sleep(10);
		
	}
	sleep(10);
	cout<<"run out"<<endl;
	return 0;
}
