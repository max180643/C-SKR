#include<stdio.h>
void main()
{
     char Fname[20],Lname[20];
     int IDNumber,Year,ans;
     
     printf("What your FristName? :");
     scanf("%s",Fname);
     printf("What your LastName? :");
     scanf("%s",Lname);
     printf("What your IDNumber? :");
     scanf("%d",&IDNumber);
     printf("Enter your Year[A.D. Only]:");
     scanf("%d",&Year);
     ans=Year-543;
     printf("My Name is : %s %s , My IDNumber is %d  , This year is %d",Fname,Lname,IDNumber,ans);
     getch();
     }
