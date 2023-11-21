/*E9.25*/
#include<stdio.h>
int main(void)
{	
	int arr[3][4];	
	printf("%p\t",arr); 			 //address
	printf("%p\t",arr[0]); 		     //address
	printf("%p\n",&arr[0][0]); 		 //address
	printf("%u\t",sizeof(arr)); 	 //48	bytes
	printf("%u\t",sizeof(arr[0])); 	 //16   bytes
	printf("%u\n",sizeof(arr[0][0]));//4    bytes 	
	return 0;
}