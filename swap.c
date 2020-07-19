//CHALLENGE = SWAPPING NUMBERS
//swapping 2 numbers without using a temporary variable


#include<stdio.h>
main()
{
	int a,b;
	//1. take input from user
	printf("Enter 2 numbers: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	//Original numbers printed
	//2. swap the numbers
	printf("a = %d and b = %d\n",a,b);
	a = b - a; 
	b = b - a;// value of b after swapping is calculated as : b = b - (b - a)
	a = a + b;//value of a after swapping is calculated as : a = b - a + a
	//3. print the swapped the numbers
	printf("After swapping: \n");
	printf("a = %d and b = %d",a,b);
	return 0;
}
