// WAP to find number is even or odd using ternary operator 
#include<stdio.h>
int main()
{
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	a%2==0 ? printf("even number") : printf("odd number");
}
