
#include<stdio.h>

struct person
{
	char *name;
	int age;
	char *work;
};

int main(int argc,char **argv)
{
	struct person  persons[] = 
	{
		{"zhangsan",10,"teacher"},
		{"lisi",12,"student"},
	};

	int i;

	for( i =0;i<2;i++)
	{
		printf("name = %s , age = %d , work = %s ",persons[i].name,persons[i].age,persons[i].work);
	}
	return 0;
}
