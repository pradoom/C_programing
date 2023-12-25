#include<iostream>
using namespace std;

class A
{
    public:
    string int_to_string(int num)
    {
        static string s;
        int i=0,j;
        int back_up=num,num1=num,count=0,c=1;

        while(back_up)
        {
            c=c*10;
            count++;
            back_up=back_up/10;
        }
       //cout<<c<<endl;
        for(num1,c=c/10;num1>0&&count>0;num1=num1%c,c=c/10,count--)
        {
            s[i]=(num1/c+48);
            cout<<(num1/c+48)<<endl;
            //cout<<s[i]<<endl;
            i++;
        }
        return s;
       
    }
};
int main()
{
    A a1;
    int num=1234;
   string s=a1.int_to_string(num);
   int i;
   for(i=0;s[i];i++)
   {
        cout<<s[i]<<endl;;
   }
 
return 0;
}