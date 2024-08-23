package exercice_2_17;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    // input = temperature in Fahrenheit ranging [-58°f,41°f], wind speed ranging [2mph,++[
    
    // output = wind chill index
    
    //instantiating Scanner object called input
    Scanner input = new Scanner(System.in);
    
    //prompting user
    System.out.println("Enter a temperature value in Fahrenheit between [-58 and 41] : ");
    
    // storing user input
    double temperature = input.nextDouble();
    
    //prompting user
    System.out.println("Enter a wind speed value in mph that isn't inferior to 2mph : ");
    
    // storing user input
    double windSpeed = input.nextDouble();
    
    //computing chill index
    double windChillIndex = 35.74 + 0.6215*temperature - 35.75*(Math.pow(windSpeed, 0.16))+0.4275*temperature*(Math.pow(windSpeed, 0.16));
   
    
    //displaying output to user 
    System.out.println("the wind chill inde is : "+windChillIndex);
    
    input.close();
  }

}
