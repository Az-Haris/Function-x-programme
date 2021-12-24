#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    printf("\t\t\tWelcome to Function Programme\n");
    printf("\t\t\t\tf(x)=x^2+5x-3\n\n\n");

    int x, fx;
    printf("Please Enter the value of 'x' : ");
    scanf("%d", &x);
    fx=pow(x,2)+5*x-3;
    printf("Value of the function is = %d",fx);
    getch();
    return 0;
}
