#include<stdio.h>
void main()
{
     char Fname[20],Lname[20];
     int IDNumber;
     float ans,math,thai,history,english,ict,social,art,physical;
     printf("What your FristName? :");
     scanf("%s",Fname);
     printf("What your LastName? :");
     scanf("%s",Lname);
     printf("What your IDNumber? :");
     scanf("%d",&IDNumber);
     printf("Enter your Score Math:");
     scanf("%f",&math);
     printf("Enter your Score Thai:");
     scanf("%f",&thai);
     printf("Enter your Score History:");
     scanf("%f",&history);
     printf("Enter your Score English:");
     scanf("%f",&english);
     printf("Enter your Score ICT:");
     scanf("%f",&ict);
     printf("Enter your Score Socail:");
     scanf("%f",&social);
     printf("Enter your Score Art:");
     scanf("%f",&art);
     printf("Enter your Score Physical:");
     scanf("%f",&physical);
     ans=(math+thai+history+english+ict+social+art+physical)/8;
     printf("My Name is : %s %s , My IDNumber is %d  ,\nMy grade point average is %.2f ",Fname,Lname,IDNumber,ans);
     getch();
     }
