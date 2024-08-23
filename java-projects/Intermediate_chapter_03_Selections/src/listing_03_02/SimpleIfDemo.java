package listing_03_02;

import java.util.Scanner;

public class SimpleIfDemo {

  public static void main(String[] args) {

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter an integer : ");

    //storing user input
    int number = input.nextInt();

    if (number % 5 == 0) {

      System.out.println("HiFIVE");

    }
    if (number % 2 == 0) {

      System.out.println("HiEVEN");

    }
    
    input.close();

  }

}
