package listing_03_03;

import java.util.Scanner;

public class SubstractionQuiz {

  public static void main(String[] args) {

    //input = anwser to random integer substraction

    //output = boolean value that compare anwser and result of substraction

    //generating random numbers
    int number1 = (int) (Math.random() * 10);
    int number2 = (int) (Math.random() * 10);

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //swaping values for the substraction to always be positive
    if (number1 < number2) {
      int temp = number1;
      number1 = number2;
      number2 = temp;
    }

    //prompting user
    System.out.println("What is the result of the substraction of : " + number1 + " - " + number2 + " ?");

    //storing user input
    int answer = input.nextInt();

    //computing boolean value of user input and printing answer accordingly
    if (answer == (number1 - number2)) {
      System.out.println("Your anwser is correct !");
    } else {
      System.out.println("Wrong anwser the result of : " + number1 + " - " + number2 + " is not : " + answer
          + " the coorect answer is : " + (number1 - number2));
    }

    input.close();

  }

}
