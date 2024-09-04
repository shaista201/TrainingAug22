/*3. C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
Example:
Consider the number 76.
1. Calculate the square of the number:
      76*76=5776
2. Determine the number of digits in the original number:
	Number of digits in 76 is 2.
3. Therefore extract the last 2 digits from the square: (mod of 10 to the power 2)
       5776 mod 100 = 76
4. Compare the extracted digits with the original number:
	Extracted digits: 76
	Original number: 76
Since the extracted digits (76) match the original number (76), 76 is an automorphic number.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
int x=n,y;
int d,r=1;
int digit=0;
while(x!=0)
{
d=x%10;
digit++;
r=r*10;
x=x/10;
}
int square=n*n;
if(square!=0)
{
y=square%r;
}
if(n==y)
{
printf("It is an automorphic number\n");
}
else
{
printf("It is not an automorphic number\n");
}
return 0;
}
