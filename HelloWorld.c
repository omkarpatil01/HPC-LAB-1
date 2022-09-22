#include<omp.h>
#include<stdio.h>
#include<pthread.h>


void main()
{
    printf("Hello world");
    #pragma omp parallel
    {
        printf("Hello from thread number %d\n",omp_get_thread_num());
    }
}
