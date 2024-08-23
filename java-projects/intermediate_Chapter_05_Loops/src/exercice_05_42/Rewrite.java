package exercice_05_42;

import java.util.Scanner;

public class Rewrite {
	
	public static void main(String[] args) throws InterruptedException {

		Scanner input = new Scanner(System.in);
		double saleAmount = 0;
		double commissionTarget = input.nextDouble();
		double commissionForCurrentSaleAmount = 0;
		double temp;
		double commissionRate = 0;
		input.close();
			 do {
				commissionRate = 0.06;
				commissionForCurrentSaleAmount = saleAmount * commissionRate;
				saleAmount++;
				}while(saleAmount <= 5000);
			temp = commissionForCurrentSaleAmount;
			do{
				commissionRate = 0.08;
				commissionForCurrentSaleAmount = (saleAmount-5000) * commissionRate;
				saleAmount++;
				}while(saleAmount <= 10000);
			temp += commissionForCurrentSaleAmount;
			do{
				saleAmount++;
				commissionRate = 0.10;
				commissionForCurrentSaleAmount = temp + (saleAmount-10000) * commissionRate;
				}while(saleAmount >= 10000 && commissionForCurrentSaleAmount != commissionTarget);
			
		System.out.printf("to make : %,.2f $ in commission you need to sell for :%,.2f $ Per year which represent : %,.2f $ per month",commissionTarget,saleAmount,(saleAmount/12));
		
		
		}
	}
