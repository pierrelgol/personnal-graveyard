package exercice_05_35;

public class Summation {
	
	public static void main(String[] args) throws InterruptedException {
		
		double x = 1/(1+Math.sqrt(2));
		for(int i = 2; i<=1000; i++) {
				x += 1/(Math.sqrt(i-1)+Math.sqrt(i));
				System.out.println("x = "+x);
		}
		System.out.println("x = "+x);
	}

}
