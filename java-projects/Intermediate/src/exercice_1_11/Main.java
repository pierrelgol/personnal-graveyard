package exercice_1_11;

public class Main {
  
  public static void main(String[] args) {
    
    // inputs : current US population, number of day in a year, nBirth/s, nDeath/s, nMigration/s
    
    // output : US population in 5 year
    
    final int currentPopUs = 312032486;
    
    final double birthPs = 7.0;
    
    final double deathPs = 13.0;
    
    final double immigrantsPs = 45.0;
    
    final int nDaysInYear = 365;
    
    final int popBalancePerYear = (int) ((((nDaysInYear*24*3600)/birthPs)+((nDaysInYear*24*3600)/immigrantsPs)) - ((nDaysInYear*24*3600)/deathPs));
    
    final int solution = currentPopUs+(5*popBalancePerYear);
    
    System.out.println(solution);
    
  }

}
