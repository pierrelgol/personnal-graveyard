package exercice_3_33;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = weight and price for 2 packages

    //output = which package has a better price for the weight

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter weight and price for package1");

    //storing user input for package 1
    double p1Weight = input.nextDouble();
    double p1Price = input.nextDouble();

    //prompting user for input
    System.out.println("Enter weight and price for package2");

    //storing user input for package 2
    double p2Weight = input.nextDouble();
    double p2Price = input.nextDouble();

    //computing price to weight ratio for each packages
    double p1PriceToWeightRatio = p1Weight / p1Price;
    double p2PriceToWeightRatio = p2Weight / p2Price;

    //computing boolean for who has the better ratio
    boolean p2IsBetterPriced = p2PriceToWeightRatio > p1PriceToWeightRatio;

    //printing response to user
    if(p1PriceToWeightRatio != p2PriceToWeightRatio) {
      System.out.println("Package " + (p2IsBetterPriced ? "2" : "1") + " has a better price");
    }else {
      System.out.println("Two packages have the same price");
    }

    input.close();

  }

}
