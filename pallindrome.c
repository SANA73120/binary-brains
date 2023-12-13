#include <stdio.h>
#include <conio.h>
void main()
{
    int x,reverse=0,a,original;
    printf("Enter the number: ");
    scanf("%d",&x);
    original=x;
    while(x!=0)
    {
        a=x%10;
        reverse=reverse*10+a;
        x=x/10;
    }
    if(reverse==original)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}
