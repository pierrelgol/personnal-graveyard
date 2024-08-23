package exercice_2_10;

import java.util.Scanner;

public class Main {

  static final int CHANGE_OF_TEMP_1KG_WATER_BY_1C_JOULE = 4184;

  public static void main(String[] args) {

    //input = amount of water in kilogrammes, temp at t0, temp at t1. 
    //output = amount of energy needed in joule

    //instantiating Scanner object called input
    Scanner input = new Scanner(System.in);

    //prompting user to enter value
    System.out.println("Enter weigth of water in Kg : ");

    //storing user input
    double amountOfWaterInKg = input.nextDouble();

    //prompting user to enter value
    System.out.println("Enter initial temperature of water in Celcius : ");

    //storing user input
    double inititalTemperature = input.nextDouble();

    //prompting user to enter value
    System.out.println("Enter final temperature of water in Celcius : ");

    //storing user input
    double finalTemperature = input.nextDouble();

    //generating/storing output
    double energyNeededInJoule = amountOfWaterInKg * (finalTemperature - inititalTemperature)
        * CHANGE_OF_TEMP_1KG_WATER_BY_1C_JOULE;

    //displaying output
    System.out.println("the total amount of energy needed is : " + energyNeededInJoule);

    input.close();

  }

}
