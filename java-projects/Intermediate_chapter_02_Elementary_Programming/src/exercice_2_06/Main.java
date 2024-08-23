package exercice_2_06;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = integer between [1,1000]

    //output = multiplication between each number composing the user inputed integer.

    //instantiating scanner object called input.
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter an integer between [1,1000] : ");
    
    //storing user input
    int number = input.nextInt();

    //retrieving first digit
    int firstDigit = number / 100;
    number = number % (firstDigit * 100);

   //retrieving second digit
    int secondDigit = number / 10;
    number = number % (secondDigit * 10);

    //retrieving third digit
    int thirdDigit = number / 1;

    //storing desired output
    int digitMultiplicationOutput = firstDigit * secondDigit * thirdDigit;

    //displaying desired output
    System.out.println(digitMultiplicationOutput);
    
    input.close();

  }

}
