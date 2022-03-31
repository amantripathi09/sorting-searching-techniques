#include<iostream>
using namespace std;
int main(){
int arr[100],n;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the elements of array";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
//array before sorting 
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\n";
}
//buuble sort takes place
for(int i=0;i<n-1;i++)//loop for number of passes
{for(int j=0;j<n-1-i;j++)
  {
    if(arr[j]>arr[j+1])
     {
       int temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
      }
    }
  }
   
 cout<<"elemenst of array after sorting";
 for(int i=0;i<n;i++)
 { cout<<arr[i]<<"\n";
 }
 return 0;
 }          


