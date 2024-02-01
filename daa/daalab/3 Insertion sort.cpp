#include<stdio.h> 
#include<conio.h> 
void inssort(int[],int); 
void display(int[],int); 
int main() 
{ 
int a[20],n,i; 
printf("\n Enter the number of elements in array are:"); 
scanf("%d",&n); 
printf("\n Enter %d elements in the array:",n); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
inssort(a,n); 
printf("\n The sorted elements in the array are:"); 
display(a,n); 
getch(); 
return 0; 
} 
void inssort(int a[],int n) 
{ 
int i,j,index=0; 
for(i=1;i<n;i++) 
{ 
index=a[i]; 
j=i; 
while((j>0)&&(a[j-1]>index)) 
{ 
a[j]=a[j-1]; 
j--; 
} 
a[j]=index; 
} 
} 
void display(int a[],int n) 
{ 
int i; 
for(i=0;i<n;i++) 
{ 
printf("%d\t",a[i]); 
} 
}
