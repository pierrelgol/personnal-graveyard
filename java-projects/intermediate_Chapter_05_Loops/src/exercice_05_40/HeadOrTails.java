package exercice_05_40;

import java.util.Random;

public class HeadOrTails {
	
	public static void main(String[] args) {
		
		int tails = 0;
		int heads = 0;
		int coin = 0;
		Random random = new Random();
		while(tails+heads!=2000000) {
			coin = random.nextInt(0, 2);
			if(coin == 1) {
				tails+=1;
			}else {
				heads+=1;
			}
		}
		System.out.printf("heads = %d    | tails = %d",heads,tails);
	}

}
