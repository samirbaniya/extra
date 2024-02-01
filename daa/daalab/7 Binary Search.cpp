/* Aim: To write a C program to demonstrate the Binary Search */ 
#include<stdio.h> 
#include<conio.h> 
void bubblesort(int[],int); 
int binsrch(int[],int,int,int); 
void display(int[],int); 
int i,j; 
int main() 
{ 
int a[20],n,key,pos=-1; 
printf("\n Enter the number of elements in array are:"); 
scanf("%d",&n); 
printf("\n Enter %d elements in the array:",n); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
printf("\n Enter the element to be searched:"); 
scanf("%d",&key); 
bubblesort(a,n); 
printf("\n The sorted elements in the array are:"); 
display(a,n); 
pos=binsrch(a,key,0,n-1); 
if(pos!=-1) 
printf("\n The Element %d is found in position %d",key,pos); 
else 
printf("\n Element not found"); 
getch(); 
return 0; 
} 
int binsrch(int a[],int key,int low,int high) 
{ 
int mid; 
while(low<=high) 
{ 
mid=(low+high)/2; 
if(key<a[mid]) 
high=mid-1; 
else if(key>a[mid]) 
low=mid+1; 
else 
return mid; 
} 
return -1; 
} 
void bubblesort(int a[],int n) 
{ 
int i,j,temp,excg=0; 
int last=n-1; 
for(i=0;i<n;i++) 
{ 
excg=0; 
for(j=0;j<last;j++) 
{ 
if(a[j]>a[j+1]) 
{ 
temp=a[j]; 
a[j]=a[j+1]; 
a[j+1]=temp; 
excg++; 
} 
} 
} 
if(excg==0) 
return ; 
else 
last=last-1; 
} 
void display(int a[],int n) 
{ 
int i; 
for(i=0;i<n;i++) 
printf("%d\t",a[i]); 
} 
