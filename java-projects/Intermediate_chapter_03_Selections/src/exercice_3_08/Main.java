package exercice_3_08;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = three integers
    
    //output = sorted integers in non-decreasing order
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user
    System.out.println("Enter Three integers : ");
    
    //storing user input
    int x = input.nextInt();
    int y = input.nextInt();
    int z = input.nextInt();
    
    //sorting the input by non-decreasing order by comparing initial order to all permutation possible
    if(x<y && y<z) {
      System.out.println("the non-decreasing for x, y, and z is : "+x+", "+y+", "+z);
    }else if(x>y && x<z) {
      System.out.println("the non-decreasing for x, y, and z is : "+y+", "+x+", "+z);
    }else if(x<z && y>z) {
      System.out.println("the non-decreasing for x, y, and z is : "+x+", "+z+", "+y);
    }else if(x>y && x<z) {
      System.out.println("the non-decreasing for x, y, and z is : "+y+", "+x+", "+z);
    }else if(x<y && y>z) {
      System.out.println("the non-decreasing for x, y, and z is : "+z+", "+x+", "+y);
    }else if(x>y && y<z) {
      System.out.println("the non-decreasing for x, y, and z is : "+y+", "+z+", "+x);
    }else {
      System.out.println("the non-decreasing for x, y, and z is : "+z+", "+y+", "+x);
    }
    
    input.close();
    
  }

}
