#include<stdio.h>
int main(int argc, char ** argv)
{
    if(argc != 4)
    {
        printf("Usage err\n");
        return 1;
    }
    FILE *sf, *swap;
    int ch,i, s = strlen(argv[2]);
    sf = fopen(argv[1],"r");
    if(sf == 0)
    {
        printf("Usage err\n");
        return 1;
    }
    swap = fopen("swap.txt","w");
    i = 0;
    while((ch=fgetc(sf))!= -1)
    {
        fputc(ch, swap);
        if(argv[2][i] != ch)
        {
            if(argv[2][i] == '\0'){
                fseek(swap,-s  -1,SEEK_CUR);
                fputs(argv[3], swap);
            }
            i = 0;
        }
        if(argv[2][i] == ch)
        {
            i++;
        }
    }
    return 0;
}
