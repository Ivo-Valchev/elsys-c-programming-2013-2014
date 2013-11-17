#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one,two,five, searched;
    scanf("%d %d %d %d", &one, &two, &five, &searched);
    int resOne=0,resTwo=0,resFive=0;
    resFive = searched/(five*5);
    searched-=resFive*5;
    resTwo = searched/(two*2);
    searched-=resTwo*2;
    resOne = searched/one;
    searched-=resOne;
    if(searched==0 && resOne<=one && resTwo<=two && resFive<=five){
        printf("Yes: %d, %d, %d\n",resOne,resTwo,resFive);
    }else{
        printf("No");
    }
    return 0;
}
