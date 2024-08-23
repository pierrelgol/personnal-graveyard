package listening_02_08;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);
    System.out.println("What is the ammount of your purchase ? ");
    double ammountPurchase = scanner.nextDouble();
    double taxRate = 0.06;
    double tax = ammountPurchase * taxRate;

    System.out.println("The tax for that ammount is : " + (int) (tax * 100) / (100.0));

    scanner.close();
    
   
  }

}
