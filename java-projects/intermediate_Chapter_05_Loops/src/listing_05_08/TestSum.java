package listing_05_08;

public class TestSum {
	
	//just a showcase of why you must not use float as loop control variable
	
	public static void main(String[] args) {
		
		//Initialise sum
		float sum = 0;
		
		//add 0.01, 0.02... 0.99, 1
		for(float i = 0.01f; i<=1.0f; i = i +0.01f) {
			sum +=i;
		}
		System.out.println(sum);
	}

}
