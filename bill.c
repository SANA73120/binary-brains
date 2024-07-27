#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,gst,d;
    printf("Enter cost of pencil: ");
    scanf("%f",&a);
    printf("Enter cost of pen: ");
    scanf("%f",&b);
    printf("Enter cost of eraser: ");
    scanf("%f",&c);
    d=a+b+c;
    gst=(d*18)/100;
    printf("%f",d+gst);
    printf();
    getch();
}
