package exercice_1_13;

public class Main {
  
  public static void main(String[] args) {
    
    double solutionE = 44.5;
    double solutionF = 5.9;
    
    double a = 3.4;
    double b = 50.2;
    
    double c = 2.1;
    double d = 0.55;
    
    double  x = ((solutionE*d)-(b*solutionF))/((a*d)-(b*c));
    double  y = ((a*solutionF)-(solutionE*c))/((a*d)-(b*c));
    
    double e = a*x+b*y;
    double f = c*x+d*y;
    
    System.out.println(x);
    System.out.println(y);
    
    System.out.println(e);
    System.out.println(f); 
   
    
    
    
    
    
  }

}
