package exercice_3_22;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = point coordinates format [X,Y]
    
    //output = boolean value indicating if given coordinates are within a rectangle centered in [1,1]
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user for input
    System.out.println("Enter a point coordinates X, Y");
    
    //storing user inputs
    double x = input.nextDouble();
    double y = input.nextDouble();

    //computing boolean value
    boolean isInTheRectangle = x<(10/2) && y<(5/2.0);
    
    //displaying appropriate output
    System.out.println("Point : ("+x+","+y+(isInTheRectangle ? ") is in the rectangle" : ") is not in the rectangle"));

    input.close();
    
  }

}
