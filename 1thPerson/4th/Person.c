

#include<stdio.h>
struct person
{
	char *name;
	int age;
	char *work;
	void (*printInfo1)(struct person *);
};

void printInfo1(struct person *per)
{
	printf("name = %s ,age = %d , work = %s ",per->name,per->age,per->work);
}
int main(int argv,int **argc)
{
	struct person persons[]=
	{
		{"zhangsan",11,"teacher",printInfo1},
		{"lisi",32,"student",printInfo1},
	};

	int i;
	for(i =0;i<2;i++)
	{
		persons[i].printInfo1(&persons[i]);
	}
	return 0;
}
