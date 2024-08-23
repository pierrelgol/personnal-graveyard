package exercice_3_04;

public class Main {
  
  public static void main(String[] args) {
    
    // input = none
    
    // output = random month in english
    
    //Generating random number between 1 and 12
    
    int randomMonthIndex = 1+(int)(Math.random()*100)/9;
    
    switch(randomMonthIndex) {
    case 1: System.out.println("January"); break;
    case 2: System.out.println("February"); break;
    case 3: System.out.println("March"); break;
    case 4: System.out.println("April"); break;
    case 5: System.out.println("May"); break;
    case 6: System.out.println("June"); break;
    case 7: System.out.println("July"); break;
    case 8: System.out.println("August"); break;
    case 9: System.out.println("September"); break;
    case 10: System.out.println("October"); break;
    case 11: System.out.println("November"); break;
    case 12: System.out.println("December"); break;
    }
    
  }

}
