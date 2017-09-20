


#include <stdio.h>

class Person
{
	private:
	char *name;
	int age;
	char *work;

	public:
	void setName(char *name);
	int setAge(int age);
	void setWork(char *work);
	void printInfo(void);
};

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

int main(int argc ,char** argv)
{
	Person per;
	per.setName("shabi");

	per.printInfo();
}
