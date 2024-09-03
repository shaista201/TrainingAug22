/*7. Implement a small C program that performs the following tasks:
	Read an integer representing the student score.
	Read a character representing the Student Grade (A, B, C, D, or F).
	Print Your score is 90 and Grade is A.*/

	#include<stdio.h>
	#include<stdlib.h>
    #include<ctype.h>
	int main()
	{
	int score;
	char grade;

	printf("Enter student score:\n");
	scanf("%d",&score);
    printf("Enter student grade:\n");
	scanf("%c", &grade);

	printf("student score is: %d\n",score);

	printf("student grade is: %c\n",grade);

	return EXIT_SUCCESS;

	return EXIT_FAILURE;
}
	
