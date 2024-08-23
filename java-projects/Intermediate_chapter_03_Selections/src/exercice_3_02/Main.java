package exercice_3_02;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = answer to x * y * z
    
    //output = boolean value if answer is correct or not
    
    //generating three random integer
    int x = (int) (Math.random()*10);
    int y = (int) (Math.random()*10);
    int z = (int) (Math.random()*10);
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user
    System.out.println("What is the anwser to the multiplication of : "+x+", "+y+", "+z+" ?");
    
    //storing user input
    int answer = input.nextInt();
    
    //computing result
    if(answer == x*y*z) {
      System.out.println("the anwser : "+answer+" to the multiplication of : "+x+" * "+y+" * "+z+" is : "+(answer == x*y*z));
    }else {
      System.out.println("the anwser : "+answer+" to the multiplication of : "+x+" * "+y+" * "+z+" is : "+(answer == x*y*z));
      System.out.println("The correct answer is : "+(x*y*z));
    }
    
    input.close();
    
    
    
    
    
    
    
  }

}
