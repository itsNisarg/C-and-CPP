 #include<stdio.h>
 int main()
 {
 int i,a[10],sum=0;
 for(i=0;i<10;i++)
 {
 printf("enter number %d : ",i+1);
 scanf("%d",&a[i]);
 sum=sum+a[i];
 }
printf("sum= %d",sum);
 }
