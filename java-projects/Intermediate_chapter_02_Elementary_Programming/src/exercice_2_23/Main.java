package exercice_2_23;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = driving distance in kilometers / car efficiency in kilometers per liter / price of liter of fuel

    // output = cost of driving

    //instantiating scanner object
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter driving distance : ");
    //storing input
    double drivingDistanceInKiloMeters = input.nextDouble(); //1449.219675

    //prompting user
    System.out.println("Enter car efficiency in kilometers per liter of fuel : ");
    //storing input
    double efficiencyInKilometersPerLiter = input.nextDouble(); //3.78541

    //prompting user
    System.out.println("Enter price of fuel : ");
    //storing input
    double priceOfFuel = input.nextDouble();

    //computing result
    double costOfDriving = (drivingDistanceInKiloMeters / efficiencyInKilometersPerLiter) * priceOfFuel;
    //formatingOutput
    double formatedOutput = (int) (costOfDriving * 100) / 100.0;
    //displaying output
    System.out.println("The cost of driving for this trip will be : "+formatedOutput+" £");

    input.close();
  }

}
