#include<stdio.h> 
//#include<conio.h> 
int main() 
{ 
int count=0,sum=0,n,i,a[50]; 
//clrscr(); 
count=count+1; 
printf("\n Enter the n value:"); 
scanf("%d",&n); 
count=count+1; 
printf("\n Enter %d values to sum:",n); 
for(i=0;i<n;i++) 
{ 
count=count+1; 
scanf("%d",&a[i]); 
} 
count=count+1; 
for(i=0;i<n;i++) 
{ 
count=count+1; 
sum=sum+a[i]; 
count=count+1; 
} 
count=count+1; 
printf("\n The of %d values is:%d and count is=%d",n,sum,count); 
//getch(); 
return 0;
} 
