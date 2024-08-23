package exercice_05_20;

public class DisplayPrimeNumbersBetween2And1200 {
	
	static int NUMBER_PERLINE = 8;
	public static void main(String[] args) {
		
		displayPrimeNumberRanging(2,1200);
	}

	private static void displayPrimeNumberRanging(int begin, int end) {
		int count = begin;
		int numberPrintedOnCurrentLine = 0;
		int number = begin;
		while(count<end) {
			number++;
			count ++;
			if(isPrime(number)) {
				
				if(numberPrintedOnCurrentLine/NUMBER_PERLINE == 1) {
					numberPrintedOnCurrentLine = 0;
					System.out.println(number);
				}else {
					numberPrintedOnCurrentLine +=1;
					System.out.print(number+" ");
				}
					
			}
			
		}
	}

	private static boolean isPrime(int number) {
		for(int divisor = 2; divisor<=number/2; divisor ++) {
			if(number % divisor == 0) return false;  break;
		}return true;
	}
}
