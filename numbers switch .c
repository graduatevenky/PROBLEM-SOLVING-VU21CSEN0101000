#include <stdio.h>

int main()
{
    int n;
    printf("by printing the numbers");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        default:
        printf("please enter the number properly");
    }

    return 0;
}
