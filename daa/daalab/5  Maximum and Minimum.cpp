#include<stdio.h> 
#include<conio.h> 
void minmax(int,int,int,int); 
int i,j,a[50],n,fmax,fmin; 
int main() 
{ 
printf("\n Enter the number of elements in array are:"); 
scanf("%d",&n); 
printf("\n Enter %d elements in the array:",n); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
printf("\n The Elements in the array are:"); 
for(i=0;i<n;i++) 
printf("%d\n",a[i]); 
//fmax=fmin=a[0]; 
minmax(0,n-1,a[0],a[0]); 
printf("\n The minimum Element of the list of elements is:%d",fmin); 
printf("\n The maximum Element of the list of elements is:%d",fmax); 
getch(); 
return 0; 
} 
void minmax(int i,int j,int max,int min) 
{ 
int gmax,gmin,hmax,hmin; 
gmax=hmax=max; 
gmin=hmin=min; 
if(i==j) 
{ 
fmax=fmin=a[i]; 
} 
else if(i==(j-1)) 
{ 
if(a[i]>a[j]) 
{ 
fmax=a[i]; 
fmin=a[j]; 
} 
else 
{ 
fmax=a[j];
fmin=a[i]; 
} 
} 
else 
{ 
int mid=(i+j)/2; 
minmax(i,mid,a[i],a[i]); 
gmax=fmax; 
gmin=fmin; 
minmax(mid+1,j,a[mid+1],a[mid+1]); 
hmax=fmax; 
hmin=fmin; 
if(gmax>hmax) 
{ 
fmax=gmax; 
} 
else 
{ 
fmax=hmax; 
} 
if(gmin>hmin) 
{ 
fmin=hmin; 
} 
else 
{ 
fmin=gmin; 
} 
} 
} 
