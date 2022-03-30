#include<stdio.h>
void printarray(int *a,int n){
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
}

int partition(int a[],int low,int high){
int pivot=a[low];
int i=low;
int j=high;
int temp;

do{
while(a[i]<=pivot){
i++;
}
while(a[j]>pivot){
j--;
}

if(i<j){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}while(i<j);
//swap a[low] and a[j]
temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;
}



void quicksort(int a[],int low,int high){
int partitionindex=partition(a,low,high){
partitionindex=partition(a,low,high);
quicksort(a,low,partionindex-1);//sort left subarray
quicksort(a,partitionindex+1,high);//sort right subarray
}
}

int main(){
int a[]={3,5,213,12};
int n=5;
printarray(a,n);
quicksort(a,0,n-1);
printarray(a,n);
return 0;
}
