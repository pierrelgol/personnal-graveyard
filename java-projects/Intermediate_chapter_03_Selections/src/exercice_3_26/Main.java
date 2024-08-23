package exercice_3_26;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = integer

    //output = boolean for : divisible by 4 and 5 ?, divisible by 4 or 5 ?, divisible by 4 or 5 but not both.

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter an integer : ");

    //storing user input
    int number = input.nextInt();

    //evaluating divisibility
    System.out.println("Is " + number + " disivible by 4 and 5 ? " + (number % 4 == 0 && number % 5 == 0));
    System.out.println("Is " + number + " disivible by 4 or 5 ? " + (number % 4 == 0 || number % 5 == 0));
    System.out.println("Is " + number + " disivible by 4 or 5 but not both ? " + (number % 4 == 0 ^ number % 5 == 0));
    
    input.close();

  }

}