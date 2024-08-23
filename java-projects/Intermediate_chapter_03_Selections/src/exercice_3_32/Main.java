package exercice_3_32;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = three points p0, p1, p2 of coordinates (nX, nY)
    
    //output = position of p2 relative to the line (p0 , p1)
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user for input
    System.out.println("Enter three points p0, p1 and p2 : ");
    
    //p0
    double x0 = input.nextDouble();
    double y0 = input.nextDouble();
    
    //p1
    double x1 = input.nextDouble();
    double y1 = input.nextDouble();
    
    //p2
    double x2 = input.nextDouble();
    double y2 = input.nextDouble();
    
    //computing position of p2 relative to the line (p0, p1)
    double positionOfP2 = (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
    
    //printing position of P2 relative to line (p0, p1)
    if(positionOfP2 == 0) {
      System.out.println("p2 is on the line (p0, p1)");
    }else if(positionOfP2>0) {
      System.out.println("p2 is on the left side of the line (p0, p1)");
      
    }else {
      System.out.println("p2 is on the right side of the line (p0, p1)");
    }
    
    input.close();
    
    
  }

}
