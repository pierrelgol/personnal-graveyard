package exercice_2_22;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    Scanner input = new Scanner(System.in);

    System.out.println("How much money do you have ? ");

    int amountOfEuro = input.nextInt();
    int amountOfCentimes = input.nextInt();

    int euroRemaining = amountOfEuro;

    //euro part
    int numberOf2Euro = euroRemaining / 2;
    euroRemaining = euroRemaining % 2;

    int numberOf1Euro = euroRemaining / 1;
    euroRemaining = euroRemaining % 1;

    //centime part
    int centimesRemaining = amountOfCentimes;

    int numberOf050Euro = centimesRemaining / 50;
    centimesRemaining = centimesRemaining % 50;

    int numberOf020Euro = centimesRemaining / 20;
    centimesRemaining = centimesRemaining % 20;

    int numberOf010Euro = centimesRemaining / 10;
    centimesRemaining = centimesRemaining % 10;

    int numberOf005Euro = centimesRemaining / 5;
    centimesRemaining = centimesRemaining % 5;

    int numberOf002Euro = centimesRemaining / 2;
    centimesRemaining = centimesRemaining % 2;

    int numberOf001Euro = centimesRemaining;

    System.out.println(
        "The optimal way of carrying your amount : " + amountOfEuro + ", " + amountOfCentimes + " is by carrying :");

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
