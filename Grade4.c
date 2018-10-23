#include<stdio.h>
void main()
{
     char Fname[20],Lname[20];
     int IDNumber;
     float ans,grade1,grade2,grade3,grade4;
     printf("What your FristName? :");
     scanf("%s",Fname);
     printf("What your LastName? :");
     scanf("%s",Lname);
     printf("What your IDNumber? :");
     scanf("%d",&IDNumber);
     printf("Enter your Grade M.1 Term1:");
     scanf("%f",&grade1);
     printf("Enter your Grade M.1 Term2:");
     scanf("%f",&grade2);
     printf("Enter your Grade M.2 Term1:");
     scanf("%f",&grade3);
     printf("Enter your Grade M.2 Term2:");
     scanf("%f",&grade4);
     ans=(grade1+grade2+grade3+grade4)/4;
     printf("My Name is : %s %s , My IDNumber is %d  ,\nMy grade point average is %.2f ",Fname,Lname,IDNumber,ans);
     getch();
     }
