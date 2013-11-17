#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int fact =1,c;
    for (c = 1; c <= n; c++)
    fact = fact * c;

    return fact;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    if(!(n>=0 && n<=20)){
        printf("error");
        return 0;
    }

    float sum=0,t;

    for(i=1; i<=n; i++)
    {
        t = (float)1/fact(i);
        sum+=t;
    }

    printf("%f",sum);

    return 0;
}
