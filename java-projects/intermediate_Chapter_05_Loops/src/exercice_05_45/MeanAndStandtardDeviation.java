package exercice_05_45;

import java.util.Scanner;

public class MeanAndStandtardDeviation {
	
	public static void main(String[] args) {
		
		int[] number = new int[10];
		double mean = 0;
		double sumSqrt = 0;
		double variance = 0;
		double standardDeviation = 0;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter 10 integers :");
		
		for(int i = 0; i<=number.length-1; i++) {
			number[i] = input.nextInt();
			mean += number[i];
			sumSqrt += number[i]*number[i];
		}
		input.close();
		mean = mean/10;
		variance = sumSqrt/10 - mean*mean;
		standardDeviation = Math.sqrt(variance);
		
		for(int x : number) {
			System.out.printf("%d ",x);
		}
		System.out.print(" mean = "+mean+" stdDev = "+standardDeviation);
		
		
	}

}
