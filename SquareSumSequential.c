 #include<stdio.h>
 #include<time.h>


 void main()
 {
    long long sum=0;
    clock_t t=clock();
    for(int i=1;i<=100;i++)
    {
        int sq=i*i;
        sum+=(sq);
        printf("square of %d is %d\n",i,sq);
    }
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("time taken is %f\n",time_taken);
    printf("sum of squares is %ld",sum);


 }