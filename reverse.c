#include<stdio.h>
#include<conio.h>
void main()
{
    int n, a,reverse;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        reverse=reverse*10+a;
        n=n/10;
    }
    printf("Reverse is %d",reverse);
    getch();
}
