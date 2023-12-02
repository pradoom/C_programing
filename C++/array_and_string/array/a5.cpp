#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Emter the array size.."<<endl;
    cin>>n;

    int *arr=new int[n];
    int *ar =(int*)malloc(sizeof(int)*n);

     cout<<"Enter the elements.."<<endl;

    int i,j,k,c=0;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ar[i]=-1;
    }
   
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ar[j]=0;
                c++;
            }
        }
        if(ar[i]!=0)
        {
            ar[i]=c;
        }
        
    }






    for(i=0;i<n;i++)
    {
        if(ar[i]==1)
        cout<<" "<<arr[i]<<"="<<ar[i];
    }

}