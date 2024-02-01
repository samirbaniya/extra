#include<stdio.h> 
#include<conio.h> 
void SumOfSub(int,int,int); 
int x[25],n,m=0,sum=0,w[25];; 
void readf() 
{ 
int i; 
printf("\n Enter the no of values in the set:"); 
scanf("%d",&n); 
printf("\n Enter the %d weights of the values in the set:",n); 
for(i=1;i<=n;i++) 
{ 
scanf("%d",&w[i]); 
sum=sum+w[i]; 
x[i]=0; 
} 
printf("\n Enter the required sum of the values in the subset:"); 
scanf("%d",&m); 
printf("\n The Total sum of the weights is:%d",sum); 
SumOfSub(0,1,sum); 
} 
void SumOfSub(int s,int k,int r) 
{ 
int i,j; 
x[k]=1; 
if(sum>=m) 
{ 
if(s+w[k]==m) 
{ 
printf("\n"); 
for(j=1;j<=n;j++) 
{ 
printf("%d\t",x[j]); 
} 
printf("\n-->"); 
for(j=1;j<=k;j++) 
{ 
if(x[j] == 1) 
printf("%d\t",w[j]); 
} 
} 

else if(s+w[k]+w[k+1]<=m) 
SumOfSub(s+w[k],k+1,r-w[k]); 
if((s+r-w[k]>=m) && (s+w[k+1]<=m)) 
{ 
x[k]=0; 
SumOfSub(s,k+1,r-w[k]); 
} 
} 
else 
{ 
printf("\n No Solutions Available because sum of all weights is %d less than required sum %d",sum,m); 
} 
} 
int main() 
{ 
readf(); 
getch(); 
} 
