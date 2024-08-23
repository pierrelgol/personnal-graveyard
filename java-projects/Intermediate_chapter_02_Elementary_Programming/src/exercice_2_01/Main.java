package exercice_2_01;

import java.util.Scanner;

public class Main {

  final static double MILES_TO_KILOMETERS_RATIO = 1.6;

  public static void main(String[] args) {

    // input = a double value in miles from the console window
    // output = conversion of that double value to kilometres

    //Instantiating a scanner object called input
    Scanner input = new Scanner(System.in);

    System.out.println("Please enter a double value of the distance you want to convert in kilometers ?");

    //initialisation of the distanceInMiles variable to store user input
    double distanceInMiles = input.nextDouble();

    //Initialisation of the distanceInKilometers variable + conversion thanks to the constant RATIO and formating the result to displayed only 2 numbers after the comma.
    double distanceInKilometers = (int) (distanceInMiles * MILES_TO_KILOMETERS_RATIO * 100) / 100.0;

    //Output
    System.out.println(distanceInKilometers);
    
    input.close();

  }

}
