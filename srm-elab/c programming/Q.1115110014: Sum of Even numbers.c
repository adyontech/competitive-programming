#include<stdio.h>
int main()
{
  int i, n, arr[20];
  int even = 0;
  int sum = 0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]%2 == 0)
    {
       sum = sum + arr[i];
       even++;
    } 
  }
  printf("The sum of the even numbers in the array is:%d", sum);
  return 0;
} 
