#include<stdio.h>
 
long unsigned int minsmoke[103][103];
int a[103][103];
 
long unsigned int min(long unsigned int a[],int l)
{
	int i,min=1000000,m;
	for(i=1;i<l;i++)
	{
		if(a[i]<min)
		{	min=a[i];  m=i;}
	}
	return m;
}
void smoke(int n)
{
	int i,j,mini,k;
	long unsigned int h[100];
   for(i=2;i<=n;i++)
   {
	   
	   for(j=2;j<=i;j++)
	   {
		  
		   k=1;
		   while(k<j)
		   {
              h[k]=a[i][k]*a[i-k][j-k]+minsmoke[i][k]+minsmoke[i-k][j-k];
			  k++;
 
		   }
           mini=min(h,k);
           minsmoke[i][j]=h[mini];
		   a[i][j]=(a[i][mini]+a[i-mini][j-mini])%100;
		   
	   }
	   
   }
 
}
 
 
int main()
{
	int i,n;
	  while(scanf("%d",&n)!=EOF)
	  { for(i=1;i<=n;i++)
	   {
         scanf("%d",&a[i][1]);
		 minsmoke[i][1]=0;
	   }
	   smoke(n);
        printf("%lu\n",minsmoke[n][n]);
	  }
	return 0;
}