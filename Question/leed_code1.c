/*

Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).



Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).

*/

#include<stdio.h>
void main()
{
    int nums[]= {0,1,2,2,3,0,4,2};
    int size=sizeof(nums)/sizeof(nums[0]);
    int value = 2;


    int i,j;

//another way to do
int index=0;
for(i=0;i<size;i++)
{
    if(nums[i]!=value)
    {
        nums[index]=nums[i];
        index++;
        
    }
}

    for(i=0;i<index;i++)
    {
        printf("%d ",nums[i]);
    }


    /*
    //one way to do
    for(i=0;i<size;i++)
    {
        if(nums[i]==value)
        {
            for(j=i;j<size;j++)
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
            i--;
            size--;
        }
    }
    int k=0;
    for(i=0;i<size;i++)
    {
        k++;
    }
    printf("K value :%d\n",k);

    */

}