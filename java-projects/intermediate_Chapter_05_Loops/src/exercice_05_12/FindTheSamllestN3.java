package exercice_05_12;

public class FindTheSamllestN3 {
	
	public static void main(String[] args) {
		System.out.println(computeSmallestN3());
	}

	private static int computeSmallestN3() {
		int n = 1;
		int smallestN3 = 0;
		while(!(smallestN3>12000)) {
			n += 1;
			smallestN3 = n*n*n;
		}return n;
	}

}
