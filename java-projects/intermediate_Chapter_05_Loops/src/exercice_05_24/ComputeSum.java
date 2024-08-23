package exercice_05_24;

public class ComputeSum {

	public static void main(String[] args) {
		double x = 1;
		for(int i = 3; i<=99; i++) {
			
			for(int k = i-2; k<=i-2; k++) {
				x = x+ (k/i);
			}System.out.printf("%f\n",x);
			
		}
		
		
		
	}

}
