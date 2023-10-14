#include<stdio.h>
int del_count_fun(char *);
void main()
{
    //char s[20]="a1b2c3ed3";
    char s[20];
    printf("Enter string..\n");
    scanf("%s",s);

    int count=del_count_fun(s);

    printf("String is : %s\n",s);
    printf("Delete number count is: %d\n",count);

}
int del_count_fun(char *s)
{
    int i,j,k,c=0;

    for(i=0;s[i];i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            c++;
            for(j=i;s[j];j++)
            {
                s[j]=s[j+1];
            }
            i--;
        }
    }
    return c;
}