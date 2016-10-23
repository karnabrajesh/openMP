/* This is the first simple hello world program with the openMP 
Author: Name: Brajesh Karna
Date Created: 10-23-2016
Language: C
Required: OpenMP Library
Purpose: Learning, May help to learn for beginners */

#include<stdio.h>
#include<omp.h> //Calling openMP Library

int main()
{
   //This parallelizes the code based on core present in the system 
   #pragma omp parallel
   printf("Hello World.\n);
   return 0;
}
