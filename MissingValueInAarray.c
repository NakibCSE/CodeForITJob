#include<stdio.h>
int main()
{
    int A[10] = {1,2,3,4,5,0,7,8,9,10};
    int temp =0, i, sum = 0, miss;
    for(i = 0; i<10; i++)
    {
        if(A[i] == 0)
        {
            temp = i;
        }
        sum += A[i];
    }
    miss = 55 - sum;
    A[temp] = miss;

    printf("%d",A[temp]);
    return 0;
}
