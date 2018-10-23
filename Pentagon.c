#include<stdio.h>
void main()
{
     float ans,side;
     printf("What side of pentagon? :");
     scanf("%f",&side);
     ans=6*1.732/4*(side*side);
     printf("Pentagon area is :%.2f",ans);
     getch();
     }
