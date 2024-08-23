package exercice_05_14;


public class ComputeGreatestCommonDivisior{
static int BIG_O = 0;
	public static void main(String[] args) {
		int n1 = 125;
		int n2 = 2525;
		System.out.println();
		int GCD = computeGcdOfInts(n1, n2);
		System.out.println(GCD);
	}

	private static int computeGcdOfInts(int n1, int n2) {
		int gcd = Math.min(n1, n2); BIG_O++;
		while(!(n1 % gcd == 0 && n2 % gcd == 0 && gcd > 0)) {
			gcd -=1;
			BIG_O ++;
		}return gcd;
		
	}

}
