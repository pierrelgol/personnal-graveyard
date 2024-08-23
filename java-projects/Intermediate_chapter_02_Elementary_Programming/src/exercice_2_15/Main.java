package exercice_2_15;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = point coordinate (x1,y1), point coordinate (x2,y2) 

    //output = distance between the two point

    //instantiating Scanner object called input
    Scanner input = new Scanner(System.in);

    //prompting user to enter values
    System.out.println("Enter coordinate of point x1 : ");

    //storing value
    double x1 = input.nextDouble();

    //prompting user to enter values
    System.out.println("Enter coordinate of point y1 : ");

    //storing value
    double y1 = input.nextDouble();

    //prompting user to enter values
    System.out.println("Enter coordinate of point x2 : ");

    //storing value
    double x2 = input.nextDouble();

    //prompting user to enter values
    System.out.println("Enter coordinate of point y2 : ");

    //storing value
    double y2 = input.nextDouble();

    double distanceBetween2Points = Math.sqrt(Math.pow((x2-x1), 2)+Math.pow((y2-y1), 2));

    System.out.println("The distance between point 1 and 2 is : " + distanceBetween2Points);

    input.close();

  }

}
