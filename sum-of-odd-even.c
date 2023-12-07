#include<stdio.h>
#include<conio.h>
void main()
{
    int n[20],a,even,odd;
    int i;
    printf("How many numbers?");
    scanf("%d",&a);
    printf("Enter numbers:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(n[i]%2==0)
            even=even+n[i];
        else
            odd=odd+n[i];
    }
    printf("Sum of even numbers: %d\n",even);
    printf("Sum of odd numbers: %d",odd);
    getch();
}
