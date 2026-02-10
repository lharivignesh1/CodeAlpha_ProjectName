#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    int choice;
    printf("Basic Calculator:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    //1-addition,2-subtraction,3-multiplication,4-division
    int result;
    switch(choice){
      case 1:
      result=a+b;
      break;
      case 2:
      result=a-b;
      break;
      case 3:
      result=a*b;
      break;
      case 4:
      result=a/b;
      break;
      defult:
      printf("Invalid choice");
      return 0;
    }
    printf("Result:%d",result);
    return 0;
}
