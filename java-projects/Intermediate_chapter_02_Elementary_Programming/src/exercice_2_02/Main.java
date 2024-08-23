package exercice_2_02;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = length of the sides and height of an equilateral triangle.
    //output = area and volume.

    //Instantiating new scanner object called input.

    Scanner input = new Scanner(System.in);

    //Asking user to input values.

    System.out.println("Enter the length of the sides/heigth of your equilateral triangle in double value : ");

    //storing user input into a variable called length
    double length = input.nextDouble();
    
    //computing area value with flex.
    double area = area(length);
    
    //computing volume value
    double volume = area*length;
    
    //displaying output
    System.out.println(area);
    System.out.println(volume);
    
    input.close();

  }

  static double area(double length) {
    return Math.sqrt(3.0) / 4.0 * (Math.pow(length, 2.0));
  }
  
  /*
   * SUCESSFULL EXERCICE ACCORDING TO THE INTERNET BUT RESULTS DOES'N MATCH THE BOOK.
   */

}
