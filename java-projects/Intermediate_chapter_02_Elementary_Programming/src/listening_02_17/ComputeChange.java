package listening_02_17;

import java.util.Scanner;

public class ComputeChange {

  public static void main(String[] args) {

    //input = amount of money

    //output = optimal amount of coins to carry

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("How much money do you have ? ");

    //storing user input
    int amountOfEuro = input.nextInt();

    //*********** Computing optimal amount of coins to carry **********\\
    
    //conversion of euro into centimes
    int euroRemaining = (int) (amountOfEuro * 100);
    int numberOf2Euro = euroRemaining / 200;
    //iteravite update of euroRemaining
    euroRemaining = euroRemaining % 200;
    int numberOf1Euro = euroRemaining / 100;
    //iteravite update of euroRemaining
    euroRemaining = euroRemaining % 100;
    int numberOf050Euro = euroRemaining / 50;
    //iteravite update of euroRemaining
    euroRemaining = euroRemaining % 50;
    int numberOf020Euro = euroRemaining / 20;
    //iteravite update of euroRemaining
    euroRemaining = euroRemaining % 20;
    int numberOf010Euro = euroRemaining / 10;
    //iteravite update of euroRemaining
    euroRemaining = euroRemaining % 10;
    int numberOf005Euro = euroRemaining / 5;
    //iteravite update of euroRemaining
    euroRemaining = euroRemaining % 5;
    int numberOf002Euro = euroRemaining / 2;
    //iteravite update of euroRemaining
    euroRemaining = euroRemaining % 2;
    int numberOf001Euro = euroRemaining;
    
    //*********************************************************************\\

    //printing results
    System.out.println("The optimal way of carrying your amount : " + amountOfEuro + " is by carrying :");
    System.out.println("2 euro coin : " + numberOf2Euro);
    System.out.println("1 euro coin : " + numberOf1Euro);
    System.out.println("0.50 euro coin : " + numberOf050Euro);
    System.out.println("0.20 euro coin : " + numberOf020Euro);
    System.out.println("0.10 euro coin : " + numberOf010Euro);
    System.out.println("0.05 euro coin : " + numberOf005Euro);
    System.out.println("0.02 euro coin : " + numberOf002Euro);
    System.out.println("0.01 euro coin : " + numberOf001Euro);

    input.close();

  }

}
