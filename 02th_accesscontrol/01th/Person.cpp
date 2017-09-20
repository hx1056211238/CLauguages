

#include <stdio.h>

class person
{
	private:
	char *name;
	int age;
	char *work;

	public:
	void setName(char *name)	
	{
		this->name = name;
	}
	int  setAge(int age)
	{
		if(age<0)
		return -1;
		this->age =age;
	}
	void setwork(char *s)
	{
		this->work = s;
	}
	void printInfo(void)
	{
		printf("name = %s ,age = %d ,work =%s",name,age,work);
	}
};

int main(int argc ,char ** argv)
{
	person per;

	per.setName( "zhangsan");
	per.setAge(10);
	per.setwork("teachar");

	per.printInfo();
}
