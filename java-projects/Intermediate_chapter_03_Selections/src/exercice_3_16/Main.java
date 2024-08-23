package exercice_3_16;

public class Main {
  
  public static void main(String[] args) {
    
    //input = none
    
    //output = random coordinate x,y within a rectangle bound of 50 width, 150 height, centered at the coordinate of 0,0;
    
    //generating random coordinate x,y
    
    double x = (Math.random()*100)/2;
    
    double y = Math.random()*150;
    
    //prompting generated coordinate x,y
    System.out.println("The coordinate of the point N is : "+x+","+y);
    
  }

}
