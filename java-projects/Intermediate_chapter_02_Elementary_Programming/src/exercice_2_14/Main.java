package exercice_2_14;

import java.util.Scanner;

public class Main {

  static final double POUND_TO_KILO_RATIO = 0.45359237;
  static final double INCH_TO_METER_RATIO = 0.0254;

  public static void main(String[] args) {

    //input = weight in pound, height in inch

    //output = BMI

    //Instantiating Scanner object
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter your weight in pound :");

    //storing user height in inch
    double weightInPound = input.nextDouble();

    //prompting user for input
    System.out.println("Enter your height in inch :");

    //storing user height in inch
    double heightInInch = input.nextDouble();

    //converting user input in appropriate units
    double weightInKilo = weightInPound * POUND_TO_KILO_RATIO;

    double heightInMeter = heightInInch * INCH_TO_METER_RATIO;

    //generating/storing output
    double bmi = weightInKilo / Math.pow(heightInMeter,2);

    //displaying output
    System.out.println("Your BMI is : " + bmi);

    input.close();

  }

}
