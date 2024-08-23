package exercice_3_03;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = a, b, c, d, e, f

    //output = number of solution to 2x2 linear equation

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter the value for : a, b, c, d, e, f");

    double a = input.nextDouble();
    double b = input.nextDouble();

    double c = input.nextDouble();
    double d = input.nextDouble();

    double e = input.nextDouble();
    double f = input.nextDouble();

    //computing solution
    double x = ((e * d) - (b * f)) / ((a * d) - (b * c));
    double y = ((a * f) - (e * c)) / ((a * d) - (b * c));

    if ((a * d) - (b * c) == 0) {

      System.out.println("The equation has no solution");
    }else if(x==y){
      System.out.println("The equation has one solution : "+x);
    } else {
      System.out.println("The solution for this equation is : "+x+", and : "+y);
    }
    input.close();

  }

}
