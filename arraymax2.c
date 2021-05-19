 #include<stdio.h>
 int main()
 {
 int i,max=0,x;
 printf("how many numbers you wanna enter? ");
 scanf("%d",&x);
 int a[x];
 for(i=0;i<x;i++)
 {
 printf("enter number %d : ",i+1);
 scanf("%d",&a[i]);
 if(max<a[i])
  max=a[i];
  }
printf("max= %d",max);
 }
