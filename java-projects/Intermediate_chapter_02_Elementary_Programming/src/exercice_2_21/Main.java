package exercice_2_21;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = invested amount, interest rate, number of year
    
    // output = future value of investment
    
    //instantiating scanner object
    Scanner input = new Scanner(System.in);
    
    //prompting user for inputs
    System.out.println("Enter invested amount : ");
    
    //storing input
    double investedAmmount = input.nextDouble();
    
    //prompting user for inputs
    System.out.println("Enter annual interest rate : ");
    
    //storing input
    double annualInterestRate = input.nextDouble();
    
    //prompting user for inputs
    System.out.println("Enter number of years : ");
    
    //storing input
    double numberOfYears = input.nextDouble();
    
    //computing output
    double futureValue = investedAmmount * (Math.pow((1 + annualInterestRate/1200), numberOfYears*12));
    
    double formatedOutput = (int)(futureValue*100)/100.0;
    
    //displaying output
    System.out.println("your future value will be : "+formatedOutput);
    
    input.close();
    
  }

}
