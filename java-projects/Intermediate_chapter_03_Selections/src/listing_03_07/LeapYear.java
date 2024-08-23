package listing_03_07;

import java.util.Scanner;

public class LeapYear {

  public static void main(String[] args) {

    //input = a year

    //output = boolean value checking is the input year is a leap year

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user to input year
    System.out.println("Enter a year : ");

    //storing user input
    int year = input.nextInt();

    //computing result
    boolean isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    
    //printing result
   if(isLeapYear) {
     System.out.println("the year : "+year+" is a leap year");
   }else {
     System.out.println("the year : "+year+" is not a leap year");
   }

   input.close();

  }

}
