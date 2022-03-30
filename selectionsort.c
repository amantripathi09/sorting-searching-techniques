#include<stdio.h>
void printarray(int*a,int n){
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("/n");
}

void selectionsort(int*a,int n){
int indexofmin,temp;
printf("running selection sort\n");
for(int i=0;i<n-1;i++){
indexofmin=i;
for(int j=i+1;j<n;j++){
if(a[j]<a[indexofmin]){
indexofmin=j;
}
}
//swap a[i] and a[indexofmin]
temp=a[i];
a[i]=a[indexofmin];
a[indexofmin]=temp;
}
}
int main(){
int a[]={3,5,2,13,12};
int n=5;
printarray(a,n);
selectionsort(a,n);
printarray(a,n);
return 0;
}
