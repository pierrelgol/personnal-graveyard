package exercice_3_10;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = anwser to random integer substraction

    //output = boolean value that compare anwser and result of substraction

    //generating random numbers
    int number1 = (int) (Math.random() * 1000);
    int number2 = (int) (Math.random() * 1000);

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("What is the result of the multiplication of : " + number1 + " * " + number2 + " ?");

    //storing user input
    int answer = input.nextInt();

    //computing boolean value of user input and printing answer accordingly
    if (answer == (number1 * number2)) {
      System.out.println("Your anwser is correct !");
    } else {
      System.out.println("Wrong anwser the result of : " + number1 + " * " + number2 + " is not : " + answer
          + " the coorect answer is : " + (number1 * number2));
    }

    input.close();

  }

}
