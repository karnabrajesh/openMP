/*
Author: Brajesh Karna
Date Created: 10-25-2016
Language C
Required Library: openMP Library
Description: Learning from Scratch of openMP
*/

#include <stdio.h>
#include <omp.h>
int main()
{
	//Parallelize the code 
  #pragma omp parallel
  {
  	//omp_get_thread_num() gives the thread number
  	//omp_get_num_threads() gives the total number of threads
   printf("Hello World from thread ( %d )\n", omp_get_thread_num());
   if(omp_get_thread_num() == 0){
   	printf("Total Thread is: (%d)\n", omp_get_num_threads());
   }
  }

  
return 0;
}
