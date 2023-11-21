/*E9.14*/
#include<stdio.h>
int main(void)
{
	int arr[4]={10,20,30,40};	
	int x=100, *ptr=arr;
	printf("%p	%d	%d\n",ptr,*ptr,x);//address 10 40
	x=*ptr++;
	printf("%p	%d	%d\n",ptr,*ptr,x);//address 20 10
	x=*++ptr;
	printf("%p	%d	%d\n",ptr,*ptr,x);//address 30 30
	x=++*ptr;
	printf("%p	%d	%d\n",ptr,*ptr,x);//address 31 31
	x=(*ptr)++;
	printf("%p	%d	%d\n",ptr,*ptr,x);//32 32
	return 0;
}
      

