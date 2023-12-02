#include<stdio.h>
#include<string.h>
int my_strlen(char*);
char* my_strcat(char*,char*);
void my_strcpy(char*,char*);
char* my_str_chr(char*,char);
void str_rev(char*s);
void str_upper(char*s);
void replace_word(char*,char*,char*,char*);
void main()
{
//    char s[100];
//    char old[100];
//    char new[100];
//    char d[50];
//     printf("Enter string.\n");
//    fgets(s,sizeof(s),stdin);
//        printf("Enter old.\n");
//    fgets(old,sizeof(old),stdin);
//        printf("Enter new.\n");
//    fgets(new,sizeof(new),stdin);

//     int i,j=0;
//     replace_word(s,new,old,d);

char *s="hello rao";
int size=my_strlen(s);
printf("%d\n",s);


}
void replace_word(char*s,char*new,char*old,char*d)
{
    int old_len=strlen(old);
    printf("%d\n",old_len);

    int new_len=strlen(new);
     printf("%d\n",new_len);
    int i,j=0;
    for(i=0;s[i];)
    {
        char *p=strstr(&s[i],old);

        if(p==&s[i])
        {
            strcpy(&d[j],new);
            printf("%d= %d=",p,&s[i]);
            
            i=i+old_len;//finding next substring
            j=j+new_len;//insertting data after new word inserted
        }
        else
        {
            strcpy(&d[j],&s[i]);
            i++;
            j++;
        }
    }
    printf("%s\n",d);
}






void str_upper(char*s)
{
    while(*s)
    {
        if(*s>='a'&&*s<='z')
        {
            *s=*s-32;
        }
        s++;
    }
}





void str_rev(char*s)
{
    char *l=s;
    while(*l)
    {
        l++;
    }
    l--;

    while(s<l)
    {
        char ch=*s;
        *s=*l;
        *l=ch;
        s++;
        l--;
    }
}



int my_strlen(char*s)
{   int c=0;
    while(*s)
    {
        c++;
        s=s+1;
    }
    return c;
}

char* my_strcat(char*sor,char*des)
{
    while(*sor)
    {
        sor=sor+1;
    }
    *sor='\0';

    while(*des)
    {
        *sor=*des;
        sor++;
        des++;
    }
}

void my_strcpy(char*d,char*s)
{
    while(*s)
    {
        *d=*s;
        d++;
        s++;
    }
    *d='\0';
}

char* my_str_chr(char*s,char ch)
{
    /*
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]==ch)
        return s+i;
    }
    return 0;
    */
    
    while(*s)
    {
        if(*s==ch)
        {
            return s;
        }
        s=s+1;
    }
    return 0;
    
}