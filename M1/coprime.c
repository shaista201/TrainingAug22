/*Assume your brother studies in class 2. He has to  complete his homework on co-primes. As an elder sibling help him in finding whether the given two numbers is co-prime or not.

Input Description:
You will be given two numbers ‘n’ and ‘m’

Output Description:
Your task is to tell whether numbers is co prime or not. If it is a co-prime print 1 else 0

Sample Input :
3 5
Sample Output :
1*/
#include <stdio.h>
#include<stdlib.h>
int coprime(int,int);
int main() {
    // Write C code here
    int a,b;
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    
    int result=coprime(a,b);
    
    if(result==1)
    {
        printf("Its coprime number\n");
    }
    else{
        printf("Not a coprime number\n");
    }
    
   
    return 0;

}
int divisible=0;
int coprime(int a,int b)
{
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            divisible=i;
            
        }
        if(i>a ||i>b)
        {
            break;
        }
    }
    return divisible;
}
