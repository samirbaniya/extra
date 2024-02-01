#include<stdio.h> 
#include<conio.h> 
void bubblesort(int[],int); 
void display(int[],int); 
int main() 
{ 
int a[20],n,i; 
printf("\n Enter the number of elements in array :"); 
scanf("%d",&n); 
printf("\n Enter %d elements in the array:",n); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
bubblesort(a,n); 
printf("\n The sorted elements in the array are:"); 
display(a,n); 
getch(); 
return 0; 
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
printf("%d \t",a[i]); 
} 
