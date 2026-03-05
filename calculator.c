#include<stdio.h>
int main() {
    int a,b,result;
    char operator;
    printf("Enter the first integer:\n");
    scanf("%d",&a);
    printf("Enter the second integer:\n");
    scanf("%d",&b);
    printf("Enter a valid operatot(+,-,*,/,%):");
    scanf(" %c",&operator);
    switch (operator)
    {
    case '+':
        result=a+b;
        printf("Result:%d+%d=%d\n",a,b,result);
        break;
        case '-':
        result=a-b;
        printf("Result:%d-%d=%d\n",a,b,result);
        break;
        case '*':
        result=a*b;
        printf("Result:%d*%d=%d\n",a,b,result);
        break;
        case '/':
        if(b!=0) {
        result=a/b;
        printf("Result:%d / %d=%d\n",a,b,result);
        } else {
            printf("division by zero is not possible");
        }
        break;
        case '%':
        if(b!=0){
        result=a%b;
        printf("Result:%d %%  %d=%d\n",a,b,result);
        } else {
            printf("Modulo by zero not possible");
        }
        break;
    
    default:
        printf("INVALID OPERATOR!!\n");
        printf("Please enter a valid operator(+,-,*,/,%)");
        break;
    }
}