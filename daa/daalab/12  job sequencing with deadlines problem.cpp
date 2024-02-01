#include<stdio.h> 
#include<conio.h> 
int jobseq(); 
void psort(); 
int tp,j[10],d[10],p[10],n; 
int main() 
{ 
int i,k; 
printf("\n Enter the n'o of jobs:"); 
scanf("%d",&n); 
printf("\n Enter the %d Deadlines for the jobs:",n); 
for(i=1;i<=n;i++) 
scanf("%d",&d[i]); 
printf("\n Enter the Profits required for jobs:"); 
for(i=1;i<=n;i++) 
scanf("%d",&p[i]); 
psort(); 
for(i=1;i<n;i++) 
//printf("%d ",p[i]); 
k=jobseq(); 
printf("\n The Required Solution is:"); 
for(i=1;i<=k;i++) 
{ 
tp=tp+p[j[i]]; 
printf("%d-->",j[i]); 
} 
printf("\n Profits:%d",tp); 
getch(); 
} 
int jobseq() 
{ 
int i,k,q; 
d[0]=0; 
j[0]=0; 
j[1]=1; 
k=1; 
for(i=2;i<=n;i++) 
{ 
int r=k; 
while((d[j[r]]>d[i]) && (d[j[r]]!=r)) 
r=r-1; 
if((d[j[r]]<=d[i]) && (d[i]>r)) 
{ 
for(q=k;q>=r+1;q--) 
{ 
j[q+1]=j[q]; 
} 
j[r+1]=i; 
k=k+1; 
} 
} 
return k; 
} 
void psort() 
{ 
int i,k,temp1; 
for(i=1;i<=n;i++) 
{ 
for(k=1;k<=n-i;k++) 
{ 
if(p[k]<p[k+1]) 
{ 
temp1=p[k]; 
p[k]=p[k+1]; 
p[k+1]=temp1; 
temp1=j[k]; 
j[k]=j[k+1]; 
j[k+1]=temp1; 
temp1=d[k]; 
d[k]=d[k+1]; 
d[k+1]=temp1; 
} 
} 
} 
}
