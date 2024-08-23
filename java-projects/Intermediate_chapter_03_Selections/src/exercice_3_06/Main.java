
package exercice_3_06;

import java.util.Scanner;

public class Main {

  static final double KILOGRAMS_PER_POUND = 0.45359237;
  static final double METERS_PER_INCH = 0.0254;

  public static void main(String[] args) {

    //input = weight in pounds, height in inch

    //output = BMI interpretation

    //instantitating scanner

    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter your weight in pounds : ");

    double weightInPounds = input.nextDouble();

    //prompting user
    System.out.println("Enter your height in feet and inch : ");

    double heightInFeet = input.nextDouble();
    double heightInInch = input.nextDouble() + (heightInFeet * 12);

    //converting to metrics

    double weightInKilos = weightInPounds * KILOGRAMS_PER_POUND;

    double heightInMeters = heightInInch * METERS_PER_INCH;

    //computing BMI

    double BodyMassIndex = weightInKilos / Math.pow(heightInMeters, 2);

    if (BodyMassIndex < 18.5) {
      System.out.println("Your BMI is : " + BodyMassIndex + " you are Underweight");
    } else if (BodyMassIndex < 25.0) {
      System.out.println("Your BMI is : " + BodyMassIndex + " you are Normal");
    } else if (BodyMassIndex < 30.0) {
      System.out.println("Your BMI is : " + BodyMassIndex + " you are Overweight");
    } else {
      System.out.println("Your BMI is : " + BodyMassIndex + " you are Obese");
    }

    input.close();

  }

}
