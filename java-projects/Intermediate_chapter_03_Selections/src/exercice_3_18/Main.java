package exercice_3_18;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = weight in pound of package

    //ouput = price of shiping based on company's price formula for the weight of the package

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter weight in pound of your package : ");

    //storing user input
    double weightInPound = input.nextDouble();

    //declaring shipping cost variable
    byte shippingCost = 0;

    //prompting shipping cost for N weight
    if (weightInPound > 0 && weightInPound <= 2) {
      shippingCost = 2;
      System.out.println("For your package the shipping cost is " + shippingCost);
    } else if (weightInPound > 2 && weightInPound <= 4) {
      shippingCost = 4;
      System.out.println("For your package the shipping cost is " + shippingCost);
    } else if (weightInPound > 4 && weightInPound <= 10) {
      shippingCost = 10;
      System.out.println("For your package the shipping cost is " + shippingCost);
    } else if (weightInPound > 10 && weightInPound <= 20) {
      shippingCost = 20;
      System.out.println("For your package the shipping cost is " + shippingCost);
    } else {
      System.out.println("Sorry but the package is too heavy and cannot be shipped");
    }

    input.close();

  }

}
