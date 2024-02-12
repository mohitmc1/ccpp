 //WAP to find maximum number among 3 numbers using ternary operator
 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("enter a 3 number : ");
 	scanf("%d %d %d",a,b,c);
 	a>b>c ? printf("a is greater") : b>a>c ? printf("b is greater") : c>b>a ? printf("c is greater");
  } 
