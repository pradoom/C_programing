/*E11_9*/
#include <stdio.h>



union exp
{
    
    int i[5];//20 size 5*4
    double l;//8
   // int k;
  
};

int main(void)
{
    union exp v;
    printf("%lu\n",sizeof(v));
    
}
