package exercice_2_20;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    // input = balance and annual interest rate

    // output = interest on the next month

    //instantiating scanner object
    Scanner input = new Scanner(System.in);

    //prompting useer for inputs
    System.out.println("Enter Balance and interest rate (e.g.1234, 3 for 3%) :  ");

    double balance = input.nextDouble();
    double annualInterestRate = input.nextDouble();

    double nextMonthInterest = balance * (annualInterestRate / 1200);

    System.out.println("Next month interest will be : " + nextMonthInterest);

    input.close();

  }

}
