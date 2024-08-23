package exercice_3_20;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    // input = temperature in Fahrenheit ranging [-58°f,41°f], wind speed ranging [2mph,++[

    // output = wind chill index

    //instantiating Scanner object called input
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println(
        "Enter a temperature value in Fahrenheit between [-58 and 41] and a wind speed value in mph that is superior or equal to 2mph :  ");

    // storing user input
    double temperature = input.nextDouble();
    double windSpeed = input.nextDouble();

    //computing boolean validity of inputs
    boolean temperatureIsValid = temperature > (-58) && temperature < 41;
    boolean windSpeedIsValid = windSpeed >= 2;
    boolean inputIsValid = windSpeedIsValid && temperatureIsValid;

    //computing chill index or displaying error message   
    if (inputIsValid) {
      double windChillIndex = 35.74 + 0.6215 * temperature - 35.75 * (Math.pow(windSpeed, 0.16))
          + 0.4275 * temperature * (Math.pow(windSpeed, 0.16));
      System.out.println("the wind chill inde is : " + windChillIndex);
    } else if (!temperatureIsValid && !windSpeedIsValid) {
      System.out.println("Sorry both inputs are invalid");
    } else {
      System.out.println("Sorry the " + (temperatureIsValid ? "wind speed is invalid" : "temperature is invalid"));
    }
    input.close();
  }

}
