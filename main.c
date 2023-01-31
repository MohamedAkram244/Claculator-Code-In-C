#include <stdio.h>
#include <stdlib.h>

int main()
{
     int nmbr1,nmbr2;
     float result;
     char opr;
     printf("Enter first number: ");
     scanf("%d",&nmbr1);
     printf("Enter second number: ");
     scanf("%d",&nmbr2);
     printf("Choose operation to perform ( +,-,*,/,% ): ");
     scanf(" %c",&opr);

     result=0;
       switch(opr)
    {
        case '+':result=nmbr1+nmbr2;
        break;
        case '-':result=nmbr1-nmbr2;
        break;
        case '*':result=nmbr1*nmbr2;
        break;
        case '/':result=(float)nmbr1/(float)nmbr2;
        break;
        case '%':result=nmbr1%nmbr2;
        break;
        default:printf("Invalid operation.\n");
    }
      printf("Result: %d %c %d = %f\n",nmbr1,opr,nmbr2,result);


    return 0;
}
