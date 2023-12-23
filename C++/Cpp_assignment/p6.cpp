#include<iostream>
#include<cstring>
using namespace std;
class student
{

        student **p;
        int n;
        int roll;
        string name;
        float marks;

        public:

        student(int roll,string name,float marks)
        {
                this->roll=roll;
                this->name=name;
                this->marks=marks;
        }

        student()
        {
                cout<<"Enter n value"<<endl;
                cin>>n;
                p=new student*[n];
                for(int i=0;i<n;i++)
                {
                        cout<<"Enter roll name marks:"<<endl;
                        cin>>roll>>name>>marks;
                        p[i]=new student(roll,name,marks);
                }
        }
        student(int i)
        {
                
        }
        void sort_roll()
        {
                int i,j;
                student temp(0);
                for(i=0;i<n;i++)
                {
                        for(j=0;j<n-i-1;j++)
                        {
                                if((p[j]->roll)>(p[j+1]->roll))
                                {
                                        temp.roll=p[j]->roll;
                                        temp.name,p[j]->name;
                                        temp.marks=p[j]->marks;

                                        p[j]->roll=p[j+1]->roll;
                                        p[j]->name,p[j+1]->name;
                                        p[j]->marks=p[j+1]->marks;

                                        p[j+1]->roll=temp.roll;
                                        p[j+1]->name,temp.name;
                                        p[j+1]->marks=temp.marks;
                                }
                        }
                }
        }


        void get_data()
        {
                int i;
                for(i=0;i<n;i++)
                {
                        cout<<p[i]->roll<<" "<<p[i]->name<<" "<<p[i]->marks<<endl;
                }
        }




};


int main()
{

student p;
p.sort_roll();
p.get_data();

}