package exercice_05_39;

import java.util.Scanner;

public class SalesCommission {

	public static void main(String[] args) throws InterruptedException {

		Scanner input = new Scanner(System.in);
		double saleAmount = 0;
		double commissionTarget = input.nextDouble();
		double commissionForCurrentSaleAmount = 0;
		double temp;
		double commissionRate = 0;
		input.close();
			while(saleAmount <= 5000) {
				System.out.println(saleAmount);
				commissionRate = 0.06;
				commissionForCurrentSaleAmount = saleAmount * commissionRate;
				saleAmount++;
				}
			temp = commissionForCurrentSaleAmount;
			while(saleAmount <= 10000) {
				System.out.println(saleAmount);
				commissionRate = 0.08;
				commissionForCurrentSaleAmount = (saleAmount-5000) * commissionRate;
				saleAmount++;
				}
			temp += commissionForCurrentSaleAmount;
			while(saleAmount >= 10000 && commissionForCurrentSaleAmount != commissionTarget) {
				saleAmount++;
				commissionRate = 0.10;
				commissionForCurrentSaleAmount = temp + (saleAmount-10000) * commissionRate;
				saleAmount++;
				}
		System.out.printf("to make : %,.2f $ in commission you need to sell for :%,.2f $ Per year which represent : %,.2f $ per month",commissionTarget,saleAmount,(saleAmount/12));
		}
	}


 
