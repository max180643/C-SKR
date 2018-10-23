#include<stdio.h>
#include<conio.h>
void main()
{
int Age,IDNumber;
char Birth[10],Xmail[40],Phone[10],Nickname[10],Name[20];
float Height,Weight;

printf("What your name? :");
scanf("%s",Name);
printf("What your Nickname? :");
scanf("%s",Nickname);
printf("What your Birthday? :");
scanf("%s",Birth);
printf("What your Email? :");
scanf("%s",Xmail);
printf("What your Phone Number? :");
scanf("%s",Phone);
//^^Char
printf("How Old are you? :");
scanf("%d",&Age);
printf("What your IDNumber :");
scanf("%d",&IDNumber);
//^^Int
printf("How much do you weight? :");
scanf("%f",&Weight);
printf("How tall are you? :");
scanf("%f",&Height);
//^^Float

printf("MyName is %s,My Nickname is %s ",Name,Nickname);
printf("\nMy Birthday is %s,Email: %s",Birth,Xmail);
printf("\nTelephone Number: %s,I'm %d Years Old",Phone,Age);
printf("\nMy ID number is %d,I weight %f Kilograms",IDNumber,Weight);
printf("\nI'm %f centimeters tall",Height);
//printf("My Name is %s ,My Nickname is %s ,My Birthday is %s,Email: %s ,\n My Telephone number is %s,I'm %d year old,My IDNumber is %d ,\n My weigh %f Kilograms,I'm %f Centimeters tall",CodeName,Nickname,Birth,Email,Phone,Age,IDNumber,Weight,Height);

getch();
        }
        
        
 
