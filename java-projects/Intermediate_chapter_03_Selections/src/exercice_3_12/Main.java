package exercice_3_12;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = three integers

    //output = verify if input is a palindrome integer

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter three integers :");

    //storing user input
    int x = input.nextInt();
    int y = input.nextInt();
    int z = input.nextInt();

    //computing boolean

    if (x == z || x == y && x == z) {
      System.out.println("the integer " + x + "," + y + "," + z + " is a palaindrome integer");

    } else {
      System.out.println("the integer " + x + "," + y + "," + z + " is not a palaindrome integer");
    }

    input.close();

  }

}
