#include<stdio.h>
void main()
{
    char name[100],reg[100];
    int sub1,sub2,sub3,total;
    float avg;
    printf("enter name of student");
    scanf("%s",&name[100]);
    printf("enter reg.no of student");
    scanf("%s",&reg[100]);
    printf("enter marks of sub1");
    scanf("%d",&sub1);
    printf("enter marks of sub2");
    scanf("%d",&sub2);
    printf("enter marks of sub3");
    scanf("%d",&sub3);
    total=sub1+sub2+sub3;
    printf("total marks=%d",total);
    avg=total/3;
printf("\n average if all =%f",avg);
if(sub1>=40&&sub2>=40&&sub3>=40)
{
    printf("\nresult = pass");
    if (avg>=90)
    printf("\ngrade=A");
    else if(avg>=75)
    printf("\ngrade=B");
    else
    printf("\ngrade=C");
}
else   
printf("\nresult = fail");
    } 

output:
enter name of student manikanta.peddada
enter reg.no of student RA2111003011674
enter marks of sub1 88
enter marks of sub2 94
enter marks of sub3 90
total marks =272
average if all=90.00000
result = pass