package exercice_3_31;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = Exchange rate of Dollar to RMB, integer to choose the conversion from Dollar to RMB or vice-versa

    //output = converted amount of money in currency of choice

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter current exchange rate of Dollar to RMB");

    //storing user input
    double exchangeRateDollarToRMB = input.nextDouble();

    //prompting user for input
    System.out.println("Enter 0 to convert dollar to RMB and 1 for vice-versa");

    //storing user input
    int response = input.nextInt();

    //checking validity of inputs
    boolean responseIsValid = (response == 0) || (response == 1);

    if (!responseIsValid) {
      System.out.println("Incorrect Input");

    } else if (response == 0 && responseIsValid) {
      //prompting user for input
      System.out.println("Enter amount of Dollar to convert to RMB");

      //storing user input
      double amountOfDollar = input.nextDouble();

      //computing amount of dollar in RMB
      double ammountOfRMB = (int) (amountOfDollar * 100 * exchangeRateDollarToRMB) / 100.0;

      //printing output
      System.out.println("$" + amountOfDollar + " is " + ammountOfRMB + " yuan");

    } else {
      //prompting user for input
      System.out.println("Enter amount of RMB to convert to Dollar");

      //storing user input
      double ammountOfRMB = input.nextDouble();

      //computing amount of dollar in RMB
      double amountOfDollar = ammountOfRMB / exchangeRateDollarToRMB;

      //printing output
      System.out.println(ammountOfRMB + " yuan" + " is " + "$" + (int) (amountOfDollar * 100) / 100.0);

    }

    input.close();
  }

}
