package exercice_3_11;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = year and month

    //output = number of days in the month

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter the month end the year : ");

    //storing user input
    String month = input.next();
    month = month.toUpperCase();
    int year = input.nextInt();

    boolean isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    //matching month

    switch (month) {
    case "JANUARY":
      System.out.println("the month of january " + year + " has 31 days");
      break;
    case "FEBRUARY":
      if(isLeapYear) {
        System.out.println("the month of february " + year + " has 29 days");
      }else {
        System.out.println("the month of february " + year + " has 28 days");
      }
      break;
    case "MARCH":
      System.out.println("the month of march " + year + " has 31 days");
      break;
    case "APRIL":
      System.out.println("the month of april " + year + " has 30 days");
      break;
    case "MAY":
      System.out.println("the month of may " + year + " has 31 days");
      break;
    case "JUNE":
      System.out.println("the month of june " + year + " has 30 days");
      break;
    case "JULY":
      System.out.println("the month of july " + year + " has 31 days");
      break;
    case "AUGUST":
      System.out.println("the month of august " + year + " has 31 days");
      break;
    case "SEPTEMBER":
      System.out.println("the month of september " + year + " has 30 days");
      break;
    case "OCTOBER":
      System.out.println("the month of october " + year + " has 31 days");
      break;
    case "NOVEMBER":
      System.out.println("the month of november " + year + " has 30 days");
      break;
    case "DECEMBER":
      System.out.println("the month of december " + year + " has 31 days");
      break;
    default:
      System.out.println("This is not valid month, check the spelling, or the validity of your input.");
    }
    
    input.close();

  }

}
