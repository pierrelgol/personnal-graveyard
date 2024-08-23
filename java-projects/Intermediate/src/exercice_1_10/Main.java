package exercice_1_10;

public class Main {
  
  public static void main(String[] args) {
    
    double runDistanceKM = 15.0;
    double runDistanceM = runDistanceKM*1.6;
    double timeToRun = 50.5;
    
    double averageSpeedMPH = timeToRun/runDistanceM;
    
    System.out.println(averageSpeedMPH);
    
    
  }

}
