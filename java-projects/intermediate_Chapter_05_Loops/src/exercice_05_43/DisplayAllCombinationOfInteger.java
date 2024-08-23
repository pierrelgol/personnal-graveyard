package exercice_05_43;

import java.util.Scanner;

public class DisplayAllCombinationOfInteger {

	public static void main(String[] args) throws InterruptedException {

		Scanner input = new Scanner(System.in);

		System.out.println("Enter 2 integer between 1 and 7");
		int x = input.nextInt();
		int y = input.nextInt();
		int temp = 0;
		if(x>y) {
			temp = x;
			x = y;
			y = temp;
		}
		input.close();
		int count = 0;
		for (int i = x; i <= y; i++) {
			
			for(int j = i; j<=y; j++) {
				Thread.sleep(1000);
				System.out.println(i+""+j);
				count++;
			}

		}
		System.out.println("There is : "+count+" combination possible for "+x+" and "+y);

	}

}
