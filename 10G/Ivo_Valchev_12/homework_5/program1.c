#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[13];
    scanf("%s",arr);
    int sortArr[13];
    int i,j;

    /*for(i=0; i<13; i++){
        switch(arr[i]){
        case 'T':
                sortArr[i]=10;
                break;
        case 'J':
                sortArr[i]=11;
                break;
        case 'Q':
                sortArr[i]=12;
                break;
        case 'K':
                sortArr[i]=13;
                break;
        case 'A':
                sortArr[i]=14;
                break;
        default:
                sortArr[i]=(int)arr[i];
                break;
        }
    } */

    for(i=0; i<13; i++){
        char a = arr[i];
        if(a=='T')
            sortArr[i]=10;
        else if(a=='J')
            sortArr[i]=11;
            else if(a=='Q')
            sortArr[i]=12;
            else if(a=='K')
            sortArr[i]=13;
            else if(a=='2')
            sortArr[i]=2;
            else if(a=='3')
            sortArr[i]=3;
            else if(a=='4')
            sortArr[i]=4;
            else if(a=='5')
            sortArr[i]=5;
            else if(a=='6')
            sortArr[i]=6;
            else if(a=='A')
            sortArr[i]=14;
            else if(a=='7')
            sortArr[i]=7;
            else if(a=='8')
            sortArr[i]=8;
            else if(a=='9')
            sortArr[i]=9;
    }

    for(i=0; i<13; i++){
        for(j=0; j<13; j++){
            if(sortArr[j]>sortArr[j+1]){
                int swicher = sortArr[j];
                sortArr[j]=sortArr[j+1];
                sortArr[j+1]=swicher;
            }
        }
    }
    printf("RESULT:");

    for(i=0; i<13; i++){
        switch(sortArr[i]){
        case 10:
            printf("T");
            break;
        case 11:
            printf("J");
            break;
        case 12:
            printf("Q");
            break;
        case 13:
            printf("K");
            break;
        case 14:
            printf("A");
            break;
        default:
            printf("%d",sortArr[i]);
            break;
        }
    }
}
