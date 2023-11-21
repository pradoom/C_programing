/*E9.30*/
#include<stdio.h>
#include<stdlib.h>
int *func1(void);
int *func2(void);
int main(void)
{
	int *ptr1,*ptr2;
	ptr1=func1();
	ptr2=func2();
	printf("%d %d\n",*ptr1,*ptr2);
	free(ptr2);
	return 0;
}
int *func1(void)
{
	int a=8,*p=&a;
	return p;
}
int *func2(void)
{
	int a=77;
	int *l=&a;
	l=(int *)malloc(sizeof(int));
	//*l=9;
	return l;
}