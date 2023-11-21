/*E9.11*/
#include<stdio.h>
int main(void)
{
	int arr[10]= {25,30,(int)65,40,(int)55,60,(int)65,70,(int)85,90},*p;
	for(p=arr+2; p<arr+8; p=p+2)
		printf("%d  ",*p);
	return 0;
}