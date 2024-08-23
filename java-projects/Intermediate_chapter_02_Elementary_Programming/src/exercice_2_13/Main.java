package exercice_2_13;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = amount of monthly deposit in saving, yearly interest rate of saving account

    //output = monthly compounded earnings and total earnings

    //instantiating Scanner object called input
    Scanner input = new Scanner(System.in);

    //prompting user for values
    System.out.println("Enter amount of monthly deposit into saving account : ");

    //storing user input
    double monthlyDeposit = input.nextDouble();

    //prompting user for values
    System.out.println("Enter yearly interest rate of saving account : ");

    //storing user input
    double yearlyInterestRateOfSavingAccount = input.nextDouble();

    //converting into monthly interest rate

    double monthlyInterestRate = yearlyInterestRateOfSavingAccount / 1200;

    //first month
    double accountBalanceN1 = monthlyDeposit + (monthlyDeposit * monthlyInterestRate);
    //second month
    double accountBalanceN2 = monthlyDeposit + accountBalanceN1
        + (accountBalanceN1 + monthlyDeposit) * monthlyInterestRate;
    //third month
    double accountBalanceN3 = monthlyDeposit + accountBalanceN2
        + (accountBalanceN2 + monthlyDeposit) * monthlyInterestRate;
    //fourth month
    double accountBalanceN4 = monthlyDeposit + accountBalanceN3
        + (accountBalanceN3 + monthlyDeposit) * monthlyInterestRate;
    //fifth month
    double accountBalanceN5 = monthlyDeposit + accountBalanceN4
        + (accountBalanceN4 + monthlyDeposit) * monthlyInterestRate;
    //sixth month
    double accountBalanceN6 = monthlyDeposit + accountBalanceN5
        + (accountBalanceN5 + monthlyDeposit) * monthlyInterestRate;

    //displaying outputs

    System.out.println("After the first month the account value is : " + accountBalanceN1 + " $");
    System.out.println("After the second month the account value is : " + accountBalanceN2 + " $");
    System.out.println("After the third month the account value is : " + accountBalanceN3 + " $");
    System.out.println("After the fourth month the account value is : " + accountBalanceN4 + " $");
    System.out.println("After the fifth month the account value is : " + accountBalanceN5 + " $");
    System.out.println("After the sixth month the account value is : " + accountBalanceN6 + " $");

    input.close();
  }

}
