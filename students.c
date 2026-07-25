#include<stdio.h>
int main ()
{
	char n;
	int a, b, c;
	
	printf("enter your name\n");
	scanf("%s", &n);
	printf("enter your math mark\n");
	scanf("%d", &a);
	printf("enter your physics mark\n");
	scanf("%d", &b);
	printf("enter your english mark\n");
	scanf("%d", &c);
	 
	 int t= a+b+c;
	 int v= t/2;
	 
	 printf("the total is: %d\n", t);
	 printf("the average is: %d\n", v);
	 
	 if (v>=50)
	 {
	 	printf("you have passed");
	 }
	 else 
	 {
	 	printf("you have failed");
	 }
	 
	 return 0;
}