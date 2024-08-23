package exercice_3_35;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = integer

    //output = is even or is odd

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter an integer : ");

    //storing user response
    int number = input.nextInt();

    //prompting user appropriate response
    System.out.println(number + " is " + (number % 2 == 0 ? "even number" : "odd number"));

    input.close();
  }

}
