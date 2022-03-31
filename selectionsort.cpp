#include<iostream>
using namespace std;
int main(){
int indexofmin,temp;
int arr[100],n;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the elements of aray";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n-1;i++)
{
indexofmin=i;
for(int j=i+1;j<n;j++)
 {
  if(arr[j]<arr[indexofmin]){
   indexofmin=j;
   } 
 }
 temp=arr[i];
 arr[i]=arr[indexofmin];
 arr[indexofmin]=temp;
  }
 
 
 //elements after sorting 
 for(int i=0;i<n;i++)
 {
  cout<<arr[i]<<"\n";
 }
 return 0;  
   
   


}
