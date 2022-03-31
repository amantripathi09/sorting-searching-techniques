#include<iostream>
using namespace std;
int main(){
int arr[100],n;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the elements of array";
for(int i=0;i<n ;i++)
{
cin>>arr[i];
}
//loop for passes
for(int i=1;i<=n-1;i++)
{
int key=arr[i];
int j=i-1;
//loopp for each pass
while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
 
 //elemnts after sorting
 for(int i=0;i<n;i++)
 { cout<<arr[i];
 }
 return 0;
 }
 
