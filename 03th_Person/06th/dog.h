


#include <stdio.h>
namespace A
{
class Dog
{
	private:
	char *name;
	int age;
	
	public:
	void setName(char *name);
	void setAge(int age);
	void printInfo(void);
};

void printVersion();
}
