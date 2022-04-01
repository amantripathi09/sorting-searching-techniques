#include<iostream>
using namespace std;
void merge(int*arr,int s,int e){
int mid=(s+e)/2;
int len1=mid-s+1;
int len2=e-mid;
int*first=new int[len1];
int*second=new int[len2];
//copy values
int k=s;
for(int i=0;i<len1;i++)
{
first[i]=arr[k++];
}

for(int i=0;i<len2;i++){
int k=mid+1;
second[i]=arr[k++];
}
//merge 2 sorted arrays
int index1=0;
int index2=0;
int mainarrayindex=s;
while(index1<len1 && index2<len2){
if(first[index1]<second[index2]){
arr[mainarrayindex++]=first[index1++];
}
else{
arr[mainarrayindex++]=second[index2++];
}
}

while(index1<len1){
arr[mainarrayindex++]=first[index1++];
}
while(index2<len2){
arr[mainarrayindex++]=second[index2++];
}
}









void mergesort(int*arr,int s,int e){
int mid=0;
//base case
if(s>=e){
return;
}
//left part sort karna hai
mergesort(arr,s,mid);
//right part sort karna haiu
mergesort(arr,mid+1,e);
//merge
merge(arr,s,e);
}



int main(){
int arr[5]={2,5,1,6,9};
int n=5;
mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
cout<<arr[i]<<"";
}cout<<endl;
return 0;
}

