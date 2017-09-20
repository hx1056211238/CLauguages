
#include<iostream>

using namespace std;


class Person
{
	private:
	char* name;
	int age;
	char *job;

	public:

	Person()
	{
		cout<<"this is no can "<<endl;
	}

	Person(char *name,int age, char *job = "none")
	{
		this->name = name;
		this->age =age;
		this->job = job;
	}	
	Person(char *name)
	{
		this->name = name;
	//	this->age = age;
	}
	void setName(char *name);
	void setAge(int age);
	void setWork(char *job);

	void printInfo(void);
};



void Person::setName(char *name)
{
        this->name = name;
}

void Person::setAge(int age)
{
        this->age = age;
}

void Person::setWork(char *job)
{
	this->job = job;
}
void Person::printInfo()
{
        cout<<"this is name :"<<name<<"age is :"<<age<<"job is "<<job<<endl;
}


int main(int argc ,char** argv)
{
	Person per("bily",32);
//	Person per;
//	per.setName("lili");
//	per.setAge(100);
//	per.setWork("shabi");
	per.printInfo();
	Person per2;
	return 0;
}
