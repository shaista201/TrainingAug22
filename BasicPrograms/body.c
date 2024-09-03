  //6. Write a program that calculates the Body Mass Index (BMI) based on user     input for weight (in kg) and height (in meters). (Formula bmi =weight/(heig    ht * height)
   #include<stdio.h>
   #include<stdlib.h>
  
   int main()
   {
   float weight,height,bmi;
  
   printf("Enter weight and height:\n");
  scanf("%f%f",&weight,&height);

  bmi=weight/(height*height);

  printf("bmi value is: %f\n",bmi);

  return EXIT_SUCCESS;

  return EXIT_FAILURE;
  }

