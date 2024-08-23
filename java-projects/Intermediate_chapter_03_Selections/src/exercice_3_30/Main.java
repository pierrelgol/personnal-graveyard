package exercice_3_30;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {

    // input = offset to GMT in integer

    // output = current time adjusted for input offset to display accurate time of the user

    //instantiating scanner object called input

    Scanner input = new Scanner(System.in);

    System.out.println("Enter the current time zone offset to GMT : ");

    int offset = input.nextInt();

    int offsetSeconds = offset * 3600;

    //Invocation of the currentTimeMillis() to get the totalNumberOfMilliseconds since UNIX EPOCH.
    long totalNumberOfMilliseconds = System.currentTimeMillis();

    //conversion of the totalNumberOfMilliseconds to totalNumberOfSeconds
    long totalNumberOfSeconds = totalNumberOfMilliseconds / 1000;

    //adjust the total number of seconds for the time zone offset
    totalNumberOfSeconds = totalNumberOfSeconds + offsetSeconds;

    //extraction of the currentSeconds value by using the %60 (number of seconds in one minute)
    int currentSeconds = (int) totalNumberOfSeconds % 60;

    //conversion of the totalNumberOfSeconds to totalNumberOfMinutes
    long totalNumberOfMinutes = totalNumberOfSeconds / 60;
    //extraction of the currentMinutes value by using the %60 (number of minutes in one hour)
    int currentMinutes = (int) totalNumberOfMinutes % 60;

    //conversion of the totalNumberOfMinutes to totalNumberOfHours
    long totalNumberOfHours = (totalNumberOfMinutes) / 60;
    //extraction of the currentHours value by using the %24 (number of hours in one day)
    int currentHours = (int) totalNumberOfHours % 24;
    
    boolean isMorning = currentHours>=0 && currentHours<=12;
    currentHours = (int) totalNumberOfHours % 12;
    
    if(isMorning) {
      System.out.println(currentHours + " : " + currentMinutes + " : " + currentSeconds+" am");
    }else {
      System.out.println(currentHours + " : " + currentMinutes + " : " + currentSeconds+" pm");
      
    }


    input.close();
  }

}
