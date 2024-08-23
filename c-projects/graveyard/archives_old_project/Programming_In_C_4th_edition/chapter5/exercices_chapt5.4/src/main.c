/*
 *
 *   Title of project :
 *   Date of creation :
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 *
 *   More on the project :
 *
 *   #TODO(s) :
 *
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int main() {

  int n = 0, accu = 0, res = 0;
  char op;

  do {

    printf("Enter a number and opperator ( S, E, +, -, *, /, %% )\n");
    scanf("%d %c", &n, &op);

    if(op != 'E'){
      if(op == 'S'){
        accu = n;
      }
      if(op == '+'){
        res = accu + n;
        printf("The result of %d + %d is %d\n",accu,n, res);
        accu = res;
      }
      if(op == '-'){
        res = accu - n;
        printf("The result of %d - %d is %d\n",accu,n, res);
        accu = res;
      }
      if(op == '*'){
        res = accu * n;
        printf("The result of %d * %d is %d\n",accu,n, res);
        accu = res;
      }
      if(op == '/' && n != 0){
        res = accu / n;
        printf("The result of %d / %d is %d\n",accu,n, res);
        accu = res;
      }
      if(op == '%' && n != 0){
        res = accu % n;
        printf("The result of %d %% %d is %d\n",accu,n, res);
        accu = res;
      }
      op = 0, n = 0;
    }
  } while (op != 'E');

  return EXIT_SUCCESS;
}
