package exercice_3_21;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = year[0000], month index[1-12], day of the month [1,31]

    //output = String of day of the week using Zeller's congruence algorithm

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter year : (eg. 2012) ");
    //storing user input
    int year = input.nextInt();
    System.out.println("Enter month : (eg. March = 3) ");
    //storing user input
    int month = input.nextInt();
    System.out.println("Enter day of the month :  (eg. 23) ");
    //storing user input
    int day = input.nextInt();
    
    //checking validity of inputs
    boolean monthIsValid = month>=1 && month<=12;
    boolean dayIsValid = day>=1 && day<=31;
    
    //closing program if inputs are invalid
    if(!monthIsValid && !dayIsValid) {
      System.exit(1);
    }
    //converting value index of month January[1] to January[13] and February[2] to February[14], to suits Zeller's congruence algorithm
    if(month == 1) {
      year = year-1;
      month = 13;
    }else if(month == 2) {
      year = year-1;
      month = 14;
    }
    
    //converting user input to suits variables names and values of Zeller's congruence algorithm
    int q = day; // is the day of the month
    int m = month; // is the month
    int j = year/100;
    int k = year%100;
    
    //computing day of the week index with Zeller's congruence algorithm
    int h = (q+((26*(m+1))/10)+k+(k/4)+(j/4)+(5*j))%7;
    
    //comparing day of the week index to prompt matching String
    switch(h) {
    case 0 : System.out.println("Day of the week is Saturday"); break;
    case 1 : System.out.println("Day of the week is Sunday"); break;
    case 2 : System.out.println("Day of the week is Monday"); break;
    case 3 : System.out.println("Day of the week is Tuesday"); break;
    case 4 : System.out.println("Day of the week is Wednesday"); break;
    case 5 : System.out.println("Day of the week is Thursday"); break;
    case 6 : System.out.println("Day of the week is Friday"); break;
    }

    input.close();
  }

}
