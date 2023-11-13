#include<stdio.h>
#define op 5
#if (op==1)
int func(void);
void main()
{
    int x=10;
    x=func();
    printf("%d\n",x);//0
}
int func(void)
{
    printf("Hello\n");
    
}



#elif (op==2)
int func(int a,b,c);//can not define like this
void main()
{
    int x=10;
    x=func();
    printf("%d\n",x);
}
int func(int a,b,c)//can not define like this
{
    printf("Hello\n");
    
}




#elif (op==3)
int fun(int a,int b,int c)//1,2,15
{
    return 2*(a+b+c);//36
}
void main()
{
    int x=1,y=2,z=3,result;
                //----------> left to right
    result=fun(x,y,(z=5,z+10));
    printf("x=%d y=%d z=%d\n",x,y,z);//1,2,3
    printf("Result=%d\n",result);//36
}



#elif (op==4)
int fun(int k)
{
    static int m=2;
    m=m+k;
    return m;//5 / 8 / 11
}
void main()
{
    int i=0,k=3;
    i+=fun(k);
    printf("%d\n",i);//i=5
    i+=fun(k);
    printf("%d\n",i);//i=5+8=13
    i+=fun(k);
    printf("%d\n",i);//13+11=24
}




#elif (op==5)
void main()
{
    int a,b=1,c=20;
    a=!b+(--c);
    printf("%d\n",a);
}




#elif (op==2)
void main()
{

}




#elif (op==2)
void main()
{

}




#elif (op==2)
void main()
{

}





#elif (op==2)
void main()
{

}




#elif (op==2)
void main()
{

}

#endif