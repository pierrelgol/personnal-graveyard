package listening_02_16_1;

public class Main {
  
  public static void main(String[] args) {
    
    double a = 1;
    double b = 1;
    double c = 1;
    double delta = Math.pow(b, 2)-(4*a*c);
    
    double expression = (-b+Math.sqrt(delta)/(2*a));
    
    System.out.println(expression);
    
    
  }

}
