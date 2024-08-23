package exercice_3_05;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = current day index, n day elapsed

    //output = day in n day elapsed based on current day index

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for current day index and n day elapsed
    System.out.println("Enter current day Index :  (eg. Sunday = 0, Monday = 1, etc.)");
    //storing user input
    int currentDayIndex = input.nextInt();

    System.out.println("Enter number of days after today : ");
    //storing user input
    int numberOfDayAfterToday = input.nextInt();
    
    int futureDay = (currentDayIndex + numberOfDayAfterToday)%7;

    String currentDay = "";

    //Evaluating equality of index to find out what is the current day 
    switch (currentDayIndex) {
    case 0:
      currentDay = "Sunday";
      break;
    case 1:
      currentDay = "Monday";
      break;
    case 2:
      currentDay = "Tuesday";
      break;
    case 3:
      currentDay = "Wednesday";
      break;
    case 4:
      currentDay = "Thursday";
      break;
    case 5:
      currentDay = "Friday";
      break;
    case 6:
      currentDay = "Saturday";
      break;
    default:
      System.out.println("This is not a day of the week");
    }
    
    //Evaluating equality of index to find out what is the future day 
    switch (futureDay) {
    case 0:
      System.out.println("the current day is : "+currentDay+" and in : "+numberOfDayAfterToday+" days it will be Sunday");
      break;
    case 1:
      System.out.println("the current day is : "+currentDay+" and in : "+numberOfDayAfterToday+" days it will be Monday");
      break;
    case 2:
      System.out.println("the current day is : "+currentDay+" and in : "+numberOfDayAfterToday+" days it will be Tuesday");
      break;
    case 3:
      System.out.println("the current day is : "+currentDay+" and in : "+numberOfDayAfterToday+" days it will be Wednesday");
      break;
    case 4:
      System.out.println("the current day is : "+currentDay+" and in : "+numberOfDayAfterToday+" days it will be Thursday");
      break;
    case 5:
      System.out.println("the current day is : "+currentDay+" and in : "+numberOfDayAfterToday+" days it will be Friday");
      break;
    case 6:
      System.out.println("the current day is : "+currentDay+" and in : "+numberOfDayAfterToday+" days it will be Saturday");
      break;
    }

    input.close();
  }

}
