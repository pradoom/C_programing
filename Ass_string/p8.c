#include<stdio.h>
void main()
{
char s[20]="615DSppzaA";

int i,j,k;

for(k=0;s[k];k++);
printf("k= %d\n",k);

for(i=0;s[i];i++)
{
    
    for(j=0;j<k-1;j++)
    {
        //printf("J= %d\n",j);

        if(s[j]>s[j+1])
        {
            char temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
        }
    }
}

printf(" %s\n",s);
}