#include <stdio.h>
int main(void) {
  float number;
    printf("Score = ");
    scanf("%f",&number);
    int Grade;
    Grade = (int)number;
    Grade = Grade / 5;
    switch(Grade){
      case 20 :
      if (number > 100){break;}
      printf("Your Score %.2f Grade A",number);break;
       case 19 :
      printf("Your Score %.2f Grade A",number);break;
       case 18 :
      printf("Your Score %.2f Grade A",number);break;
       case 17 :
      printf("Your Score %.2f Grade A",number);break;
       case 16 :
      printf("Your Score %.2f Grade A",number);break;
       case 15 :
      printf("Your Score %.2f Grade B+",number);break;
       case 14 :
      printf("Your Score %.2f Grade B",number);break;
       case 13 :
      printf("Your Score %.2f Grade C+",number);break;
       case 12 :
      printf("Your Score %.2f Grade C",number);break;
       case 11 :
      printf("Your Score %.2f Grade D+",number);break;
       case 10 :
      printf("Your Score %.2f Grade D",number);break;
      default:
      if(number >=0 && number<50 ){
      printf("Your Score %.2f Grade F",number);break;
      }
      else{break;}
    }
  return 0;
}