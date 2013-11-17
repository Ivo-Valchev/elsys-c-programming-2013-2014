#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num;
    scanf("%lld",&num);
    int arr[10],i;
    for(i=0; i<10; i++){
        arr[i]=0;
    }
    while(num>0){
        for(i=0; i<10; i++){
            if(num%10==i){
                arr[i]++;
                break;
            }
        }
        num/=10;
    }

    for(i=0; i<10; i++){
        arr[i]>1 ? printf("%d : %d\n", i, arr[i]) : 0;
    }

    return 0;
}
