package exercice_2_05;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = sub_total and gratuityRate

    //output = total and gratuityTotal

    //instantiating scanner object called input
    Scanner input = new Scanner(System.in);

    //storing user input 1
    double subTotal = input.nextDouble();

    //storing user input 2
    double gratuityRate = input.nextDouble() / 100;

    //storing output 1
    double total = (int) (subTotal * 100) * (1 + gratuityRate) / 100.0;

    //storing output 2
    double gratuity = (int) (subTotal * 100) * (gratuityRate) / 100.0;

    //displaying output 1 & 2
    System.out.println(total);
    System.out.println(gratuity);

    input.close();
  }

}
