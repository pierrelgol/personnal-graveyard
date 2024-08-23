package listening_02_09;

import java.util.Scanner;

public class ComputeLoan {

  public static void main(String[] args) {

    //create a scanner
    Scanner input = new Scanner(System.in);

    System.out.println("enter annual interest rate in percentage, eg 7.25 :");
    double annualInterestRate = input.nextDouble();

    //obtain monthly interest rate
    double monthlyInterestRate = annualInterestRate / 1200;

    System.out.println("enter number of year :");
    int numberOfYears = input.nextInt();

    System.out.println("enter loan ammount :");
    double loanAmmount = input.nextDouble();

    //calculate monthly payment
    double monthlyPayment = loanAmmount * monthlyInterestRate
        / (1 - 1 / Math.pow(1 + monthlyInterestRate, numberOfYears * 12));

    //calculate total payment
    double totalPayment = monthlyPayment * numberOfYears * 12;

    //display output
    System.out.println("your monthly payment will be : " + (int) (monthlyPayment * 100) / 100.0);
    System.out.println("your total payment will be : " + (int) (totalPayment * 100) / 100.0);

    input.close();

  }

}
