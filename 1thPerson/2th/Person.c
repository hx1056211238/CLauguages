

#include <stdio.h>

int main(int agrc,char *argv)
{
	char *names[] = {"zhangsan","lisi"};
	char age[] = {10,16};

	char *work[] = {"teacher","doctor"};

	int i;

	for(i=0;i<2;i++)
	{
		printf("name = %s,age=%d,work=%s",names[i] ,age[i],work[i]);
	}
	return 0;
}
