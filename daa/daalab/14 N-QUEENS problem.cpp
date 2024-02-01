#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
void readv(); 
void nqueen(int,int); 
int place(int,int); 
int x[25],count=0; 
void readv() 
{ 
int n; 
printf("\n Enter the no of Queens to be placed:"); 
scanf("%d",&n); 
printf("\n The Places in which the %d Queens are to placed in the %dx%d ChessBoard  is:",n,n); 
nqueen(1,n); 
printf("\n The No of Solutions for the %d Queens Problem are:%d",n,count); 
} 
void nqueen(int k,int n) 
{ 
int i,j; 
for(i=1;i<=n;i++) 
{ 
if(place(k,i)) 
{ 
x[k]=i; 
if(k==n) 
{ 
count++; 
if(count%10 == 0) 
getch(); 
printf("\n"); 
for(j=1;j<=n;j++) 
{ 
printf("%d\t",x[j]); 
} 
} 
else 
{ 
nqueen(k+1,n); 
} 
} 
} 
} 
int place(int k,int i) 
{ 
int j; 
for(j=1;j<=k-1;j++) 
{ 
if((x[j]==i)||(abs(x[j]-i)==abs(j-k))) 
{ 
return 0; 
} 
} 
return 1; 
} 
int main() 
{ 
readv(); 
getch(); 
} 
