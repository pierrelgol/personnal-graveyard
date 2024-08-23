package exercice_05_13;

public class FindLargetN2 {

	public static void main(String[] args) {
		System.out.println(computeLargestN2());
	}

	private static int computeLargestN2() {
		
		int n = 1;
		int largestN2 = 0;
		do {
			largestN2 = n*n;
			n ++;
		}while(largestN2<12000);
		return n;
				
	}
}
