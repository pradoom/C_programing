#include<iostream>
#include<cstring>
using namespace std;

/*

16.Write a C++ program to sort the given five names from the keyboard 
and print it in the sorted order. 

*/
class name_sort
{
  char **s;

  public:
  name_sort()
  {
    s=new char*[5];//5 number of charctor pointer s[0] s[1] s[2] s[3] s[4] each will point to single string

    int i;
    for(i=0;i<5;i++)
    {
        s[i]=new char[10];//s[0] with size of 10 bytes
    }
  }  

  void set_data()
  {
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter name"<<endl;
        cin>>s[i];
    }
  }

  void get_data()
  {
    int i;
    for(i=0;i<5;i++)
    {
        cout<<s[i]<<" "<<endl;
    }
  }

  friend void sort_by_name(name_sort&);


};

void sort_by_name(name_sort& t)
{
  int i,j;
  
  for(i=0;i<5;i++)
  {
    for(j=0;j<5-i-1;j++)
    {
      if(strcmp(t.s[j],t.s[j+1])>0)
      {
          char *s=t.s[j];
          t.s[j]=t.s[j+1];
          t.s[j+1]=s;
      }
    }
  }
  
}

int main()
{
    name_sort b1;
    b1.set_data();
    
    sort_by_name(b1);

    b1.get_data();
return 0;
}