package exercice_2_11;

import java.util.Scanner;

public class Main {

  static final int YEAR_TO_SECONDS_CONVERSION = 86400;
  static final int NUMBER_OF_DAYS_PER_YEAR = 365;
  static final int STARTING_US_POPULATION = 312032486;
  static final int SECONDS_PER_YEAR = NUMBER_OF_DAYS_PER_YEAR * YEAR_TO_SECONDS_CONVERSION;
  static final double BIRTH_PER_SECONDS = 7.0;
  static final double DEATH_PER_SECONDS = 13.0;
  static final double NEW_MIGRANTS_PER_SECONDS = 45.0;
  static final int POPULATION_YEARLY_BALANCE = (int) (SECONDS_PER_YEAR / BIRTH_PER_SECONDS
      + SECONDS_PER_YEAR / NEW_MIGRANTS_PER_SECONDS - SECONDS_PER_YEAR / DEATH_PER_SECONDS);

  public static void main(String[] args) {

    // inputs : current US population, number of day in a year, nBirth/s, nDeath/s, nMigration/s

    // output : US population in n year

    //instantiating Scanner object

    Scanner input = new Scanner(System.in);

    //prompting user to enter value for n year
    System.out.println("Enter number of year to increase population by : ");

    //storing input
    int numberOfYear = input.nextInt();

    //generating/storing output
    int output = STARTING_US_POPULATION + (numberOfYear * POPULATION_YEARLY_BALANCE);

    //displaying output
    System.out.println("The US population will be : "+output+" in "+numberOfYear+" years.");

    input.close();

  }

}
