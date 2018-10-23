#include<stdio.h>
void main()
{
     char Fname[20],Lname[20];
     int IDNumber;
     float weight,tall,ans,tall1;
     
     printf("What your FristName? :");
     scanf("%s",Fname);
     printf("What your LastName? :");
     scanf("%s",Lname);
     printf("What your IDNumber? :");
     scanf("%d",&IDNumber);
     printf("How much do you weight? :");
     scanf("%f",&weight);
     printf("How tall are you?[x.xx] :");
     scanf("%f",&tall);
     ans=(weight/tall)/tall;
     printf("My Name is : %s %s , My IDNumber is %d  ,\nI weight %.2f kilograms ,\nI'm %.2f centimeters tall ,My BMI is %.2f",Fname,Lname,IDNumber,tall,weight,ans);
     getch();
     }
