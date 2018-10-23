#include<stdio.h>
void main()
{
     int Age,IDnumber;
     char Birthday[10],Email[30],PhoneNumber[12],Nickname[10],Name[20];
     float Height,Weight;
     
     printf("What Your Name? :");
     scanf("%s",Name);
     printf("What Your NickName? :");
     scanf("%s",Nickname);
     printf("What Your Email? :");
     scanf("%s",Email);
     printf("What your PhoneNumber? :");
     scanf("%s",PhoneNumber);
     printf("What Your Birthday? :");
     scanf("%s",Birthday);
     printf("How Old Are You? :");
     scanf("%d",&Age);
     printf("What Your IDnumber? :");
     scanf("%d",&IDnumber);
     printf("How Tall Are You? :");
     scanf("%f",&Height);
     printf("How much you weight? :");
     scanf("%f",&Weight);
     printf("My name is %s.,My nickname is %s.,I'm %s YearsOld.,My phonenumber is %s .,My IDnumber is %d .,My birthday is %s .,My Email is %s .,I tall %f cm.,I weight %f Kg.",Name,Nickname,Age,PhoneNumber,IDnumber,Birthday,Email,Height,Weight);
     getch();
      }
