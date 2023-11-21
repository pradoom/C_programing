/*E9.26*/
#include<stdio.h>
int main(void)
{	
	int arr[3][4][5];	
	printf("%p\t",arr); 			
	printf("%p\t",arr[0]); 		
	printf("%p\t",arr[0][0]); 		
	printf("%p\n",&arr[0][0][0]);		
	printf("%u\t",sizeof(arr)); 		//240 bytes (3*4*5)*4
	printf("%u\t",sizeof(arr[0])); 		//80  bytes (4*5)*4 2d array size
	printf("%u\t",sizeof(arr[0][0])); 	//20  bytes 
	printf("%u\n",sizeof(arr[0][0][0]));//4   bytes 	
	return 0;
}