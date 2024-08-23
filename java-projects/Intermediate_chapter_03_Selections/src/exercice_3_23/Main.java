package exercice_3_23;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = point coordinates format [X,Y]
    
    //output = boolean value indicating if given coordinates are within a rectangle radius centered in [0,0]
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user for input
    System.out.println("Enter a point coordinates X, Y");
    
    //storing user inputs
    double x = input.nextDouble();
    double y = input.nextDouble();
    
    //computing distance to origing
    double distanceToOrigin = Math.sqrt(Math.pow((0-x), 2)+Math.pow((0-y), 2));
    
    //computing boolean value
    boolean isInTheCircle = distanceToOrigin<=10;
    
    //displaying appropriate output
    System.out.println("Point : ("+x+","+y+(isInTheCircle ? ") is in the circle" : ") is not in the circle"));

    input.close();
    
  }

}
