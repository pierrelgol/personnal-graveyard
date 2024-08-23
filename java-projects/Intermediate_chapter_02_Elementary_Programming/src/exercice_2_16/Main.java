package exercice_2_16;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {

    //input = length of the sides of an hexagon.
    //output = area .

    //Instantiating new scanner object called input.

    Scanner input = new Scanner(System.in);

    //Asking user to input values.

    System.out.println("Enter the length of the sides of the hexagon : ");

    //storing user input into a variable called length
    double hexagonSideLength = input.nextDouble();
    
    //computing area value
    
    double area = ((3*Math.sqrt(3))/2)*Math.pow(hexagonSideLength, 2);
    
    System.out.println("The are of the hexagon is : "+area);

    input.close();

  }



}
