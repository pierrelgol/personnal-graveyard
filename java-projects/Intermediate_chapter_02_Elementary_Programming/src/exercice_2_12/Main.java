package exercice_2_12;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = acceleration a in meter/s^2, and take off speed v in meter/s

    //output = minimal runway length

    //Instantiating Scanner object called input
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter speed in meter per seconds : ");
    
    //storing user input
    double speed = input.nextDouble();
    
    //prompting user
    System.out.println("Enter acceleration in meter per seconds^2 : ");

    //storing user input
    double acceleration = input.nextDouble();


    //generating/storing output
    double minimunRunWayLength = Math.pow(speed, 2) / (acceleration * 2);
    
    //formating output
    double formatedOutput = (int)(minimunRunWayLength*1000)/1000.0;

    //displaying output
    System.out.println("the minimun runway length for this airplaine is : " + formatedOutput + " meter(s)");

    input.close();

  }

}
