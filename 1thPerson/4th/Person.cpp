

#include<stdio.h>
class person
{
	public:
	char *name;
	int age;
	char *work;
	void printInfo(void)
	{
		printf("name =%s,age= %d,work = %s",name,age,work);
	}
};

void printInfo1(struct person *per)
{
	printf("name = %s ,age = %d , work = %s ",per->name,per->age,per->work);
}
int main(int argv,int **argc)
{
	struct person persons[]=
	{
		{"zhangsan",11,"teacher"},
		{"lisi",32,"student"},
	};

	int i;
	for(i =0;i<2;i++)
	{
	 persons[i].printInfo();	//	persons[i].printInfo1(&persons[i]);
	}
	return 0;
}
