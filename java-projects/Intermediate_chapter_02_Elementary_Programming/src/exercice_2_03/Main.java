package exercice_2_03;

import java.util.Scanner;

public class Main {

  final static double METERS_TO_FEET_RATIO = 3.2786;

  public static void main(String[] args) {

    //instantiating scanner object called input 

    Scanner input = new Scanner(System.in);

    //asking user to input value

    System.out.println("Enter a value for meter : ");

    //storing user input
    double meter = input.nextDouble();

    //storing output
    double feet = meter * METERS_TO_FEET_RATIO;

    //displaying output
    System.out.println(meter + " is equal to " + feet + " feet(s)");
    
    input.close();

  }

}
