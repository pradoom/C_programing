#include<iostream>
using namespace std;
int delete_any_bits(unsigned int*,int,int);
int main()
{
    unsigned int num;
    int pos,bits;
    cout<<"Enter number position and bits to delete.."<<endl;
    cin>>num>>pos>>bits;


    int p=0,k;
    for(p=31;p>=0;p--)
    {
        k=num>>p&1;
        cout<<k;
        if(p%4==0)
        cout<<" ";
        
    }
    cout<<""<<endl;
    delete_any_bits(&num,pos,bits);

}

int delete_any_bits(unsigned int* num,int pos,int bits)
{
    unsigned int s1,s2,s3,s4,s5;

    s1=*num>>(bits+pos);//0000 0000 0000 0000 0000 0000 0000 0111 
    
    s2=*num<<(32-pos);  //1100 0000 0000 0000 0000 0000 0000 0000 

    s3=s1<<(bits+pos);//0000 0000 0000 0000 0000 0001 1100 0000

    s4=s2>>30;        //0000 0000 0000 0000 0000 0000 0000 0011

    s5=s4|s3;         //0000 0000 0000 0000 0000 0001 1100 0011 




    int p=0,k;
    for(p=31;p>=0;p--)
    {
        k=s5>>p&1;
        cout<<k;
        if(p%4==0)
        cout<<" ";
        
    }
    cout<<""<<endl;
}