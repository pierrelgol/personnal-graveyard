package exercice_1_12;

public class Main {

  public static void main(String[] args) {
    
    double runDistanceMiles = 24.0;
    
    double runDistanceKilometers = runDistanceMiles/1.6;
    
    int hour = 1;
    int minutes = 40;
    int seconds = 35;
    
    final double nHour = hour*1+(minutes/60)+(seconds/3600);
    
    //double avgSpeedKPH = nHour/runDistanceKilometers;
    double avgSpeedKPH = runDistanceKilometers/nHour;
    
    System.out.println(avgSpeedKPH);

  }

}
