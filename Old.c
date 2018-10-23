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
     printf("When were you born? [A.D. Only]:");
     scanf("%d",&Year);
     ans=2014-Year;
     printf("My Name is : %s %s , My IDNumber is %d  , I'm %d Year old",Fname,Lname,IDNumber,ans);
     getch();
     }
