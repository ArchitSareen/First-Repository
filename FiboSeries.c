#include<stdio.h>
 
int main()
{
   int n, f=0, s=1, next, i;
   printf("Enter the number of terms\n");
   scanf("%d",&n);
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for (i= 0;i<n;i++)
   {
      if ( i <= 1 )
         next = i;
      else
      {
         next=f+s;
         f=s;
         s=next;
      }
      printf("%d\n",next);
   }
 
   return 0;
}
