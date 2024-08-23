package listing_03_06;

import java.util.Scanner;

public class TestBooleanOperators {
  
  public static void main(String[] args) {
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user
    System.out.println("Enter an integer");
    int number = input.nextInt();
    
    //computing divisibility
    if(number % 2 == 0 && number % 3 == 0) {
      System.out.println("this "+number+" is divisible by 2 and 3");
    }
    if(number % 2 == 0 || number % 3 == 0) {
      System.out.println("this "+number+" is divisible by 2 or 3");
    }
    if(number % 2 == 0 ^ number % 3 == 0) {
      System.out.println("this "+number+" is divisible by 2 or 3 but not both");
    }
    
    input.close();
    
  }

}
