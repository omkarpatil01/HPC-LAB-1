#include<stdio.h>
#include<omp.h>

void main()
{
    long long sum=0;
    double itime,ftime,exec_time;
    itime=omp_get_wtime();
    #pragma omp paraller for reduction(+:sum)
    for(int i=1;i<=100;i++)
    {
        sum+=(i*i);
        long long s=i*i;
        printf("square of %d is= %d\n",i,s);
    }
    ftime=omp_get_wtime();
    exec_time=ftime-itime;
    printf("\n time taken is %f\n",exec_time);
    printf("sum is %ld",sum);

}