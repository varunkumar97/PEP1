#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;

    printf("Enter the values of x and y\n");
    scanf("%d%d", &x,&y);

    if(x==y)
        printf("x is equal y");
    else if(x>y)
        printf("x is greater than y");
    else
        printf("x is less than y");
    return 0;
}