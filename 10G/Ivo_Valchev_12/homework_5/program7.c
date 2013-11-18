#include <stdio.h>
#include <stdlib.h>

char* word(int i)
{
    switch(i){
        case 1:
            return "edno";
        case 2:
            return "dve";
        case 3:
            return "tri";
        case 4:
            return "chetiri";
        case 5:
            return "pet";
        case 6:
            return "shest";
        case 7:
            return "sedem";
        case 8:
            return "osem";
        case 9:
            return "devet";
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    if(!(n>0 && n<99))
       {
           printf("error");
           return 0;
       }
    if(n>9 && n<13){
        switch(n){
        case 10: printf("deset");
                 break;
        case 11: printf("edinadeset");
                 break;
        case 12: printf("dvanadeset");
                 break;
        }
        return 0;
    }else if(n>12 && n<20){
        char* str = word(n%10);
        printf("%snadeset",str);
    }else if(n<10)
    {
        printf("%s",word(n));
    }else{
        char* str="";
        if(n%10==0)
        {
            n/=10;
            if(n==2) printf("dvadeset");
            else{
            char* str = word(n);
            printf("%sdeset",str);
            }
        }else
        {
            char *str = word(n%10);
            n/=10;

            char *str2 = word(n%10);
            if(n==2){printf("dvadeset i %s",str);}
            else {printf("%sdeset i %s",str2,str);}
        }
    }
    return 0;
}
