//#include<stdio.h>
namespace B
{

class Person
{
	private:

	char *name;
	int age;
	char *work;
//	void printInfo(void);


	public :
	void setName(char *name);
	int setAge(int age);
	void setWork(char *work);
	void printInfo(void);

};

void printVersion(void);
}

