#include<stdio.h>
int prime(int,int);
void num_count();
int main()
{

    num_count();

}
void num_count(){
    static int i=1;
    if(i==100)
        return;
    else{
        int p=prime(2,i);
        if(i==p)
        printf("%d ",i);
        i++;
        num_count();
    }
    
}
int prime(int j,int i){
    if(i==1){
        return 0;
    }
    if(j==i){
        return i;
    }
    if(i%j==0){
        return 0;
    }
    else {
        j++;
    }
    return prime(j,i);
}
