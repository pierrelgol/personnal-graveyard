package listing_03_01;

import java.util.Scanner;

public class AdditionQuiz {

  public static void main(String[] args) {

    //generating pseudo random number
    int number1 = (int) (System.currentTimeMillis() % 10);
    int number2 = (int) (System.currentTimeMillis() / 10 % 10);

    //instantiating scanner object
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("What is " + number1 + " + " + number2 + " ?");

    //storing user input
    int anwser = input.nextInt();

    //displaying result

    System.out.println(number1 + " + " + number2 + " = " + anwser + " is :" + (number1 + number2 == anwser));

    input.close();

  }

}
