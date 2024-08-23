package exercice_05_33;

public class PerfectNumber {

	public static void main(String[] args) throws InterruptedException {

		int count = 0;
		int[] perfectNumbers = new int[10];
		int sumDivisor = 0;

		for (int i = 6; i <= 10000000;) {
			System.out.println(i);
		    for (int j = i - 1; j > 0; j--) {
		        if (i % j == 0) {
		            sumDivisor += j;
		        }
		    }
		    if (sumDivisor == i) {
		        perfectNumbers[count] = i;
		        count++;
		    }
		    sumDivisor = 0;
		    i += 2;
		}
		for (int x : perfectNumbers) {
			System.out.println("perfect Number : " + x);
		}

	}
}
