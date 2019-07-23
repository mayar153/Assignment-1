#include <stdio.h>
#include <stdlib.h>
int if_function(int number)
{
if(number==0)
    printf("the machine is on\n");
    if(number==1)
printf("the machine is off\n");
 if(number==2)
 printf("the machine is working\n");
 if(number==3)
    printf("the machine is moving\n");
 if(number==4)
    printf("the machine is stopped\n");
    if(number==5)
    printf("the machine is error\n");
    if(number==6)
    printf("the machine is returned\n");
    if(number==7)
    printf("the machine is low\n");
if(number==8)
    printf("the machine is charging\n");
}
int test_function(int x,int y)
{
    int i;
    for(i=1;i<=x;i++)
    {
    if(i%y!=0)
    {
        printf("%i",i);
        printf("\t");
    }
    }
return 0;
}
int m_function(int a,int result)
{
    int i;
    printf("%i\t",a);
    result=a;
    for(i=1;i<=a;i++)
        {
    result=result*a;
 printf("%i",result);
 printf("\t");
    }
  return 0;
}


int main()
{
    int number,up,x,y,a,result;
    printf("up=");
    scanf("%i",&up);
  if(up==1)
  {
scanf("%i",&number);
printf("%i",if_function(number)) ;
  }


    if(up==2)
    {
        scanf("%i",&x);
        scanf("%i",&y);
        printf("%i",test_function(x,y));
    }

     if(up==3)
  {
scanf("%i",&a);
printf("%i",m_function(a,result)) ;
  }

    return 0;
}
