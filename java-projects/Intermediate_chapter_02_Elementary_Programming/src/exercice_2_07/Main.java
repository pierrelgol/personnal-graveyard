package exercice_2_07;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = long minutes number

    //output = conversion of the input in years and days assuming a year is 365 days.

    //instantiating scanner object called input.
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter the number of minutes : ");

    //storing user input
    long totalMinutes = input.nextLong();

    //converting minutes into years
    long totalAmountOfYears = totalMinutes / 525600;

    //storing remainingMinutes from the totalAmountOfYears conversion
    long remainingMinutes = totalMinutes % 525600;

    //converting remainingMinutezs minutes into days
    long totalAmountOfDays = remainingMinutes / 1440;

    //storing remainingMinutes from the totalAmountOfDays conversion
    remainingMinutes %= 1440;

    //converting remainingMinutezs minutes into hours
    long totalAmountOfHours = remainingMinutes / 60;

    //formating output
    String output = totalMinutes + " is equal to roughly : " + totalAmountOfYears + " years, and : " + totalAmountOfDays
        + " days, and :" + totalAmountOfHours + " hours.";

    //displaying desired output
    System.out.println(output);

    input.close();

  }

}
