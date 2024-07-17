#include<stdio.h>
int main()
{
int x,y,z,n;
float k;
printf("Enter x value: ");
scanf("%d",&x);
printf("Enter y value: ");
scanf("%d",&y);
printf("Enter z value: ");
scanf("%d",&z);
printf("Enter n value: ");
scanf("%d",&n);
switch (n)
{
 case 1:
     k=x+y*z/4%2-1;
     printf("%f",k);
     break;
 case 2:
    k=x%y+z*z;
    printf("%f",k);
    break;
 case 3:
    k=x*x-y/z;
    printf("%f",k);
    break;
 case 4:
    k=x+y/z-y;
    printf("%f",k);
    break;
 case 5:
    k=x+y-(x=y);
    printf("%f",k);
    break;

}
return 0;
}
