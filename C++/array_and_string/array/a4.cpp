#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Emter the array size.."<<endl;
    cin>>n;

    int *arr=new int[n];
    //int *ar =(int*)malloc(sizeof(int)*n);

     cout<<"Enter the elements.."<<endl;

    int i,j,k;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }

        }
    }






    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

}