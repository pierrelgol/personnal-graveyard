package listing_04_06;

public class FormatDemo {
	
	public static void main(String[] args) {
		
		//display the header of the display
		System.out.printf("%-10s%-10s%-10s%-10s%-10s\n","Degrees","Radians","Sine","Cosine","Tangent");
		
		//display value for 30 degrees
		int degrees = 30;
		double radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n",degrees,radians,Math.sin(radians),Math.cos(radians),Math.tan(radians));
		
		//display value for 60 degrees
		degrees = 60;
		radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n",degrees,radians,Math.sin(radians),Math.cos(radians),Math.tan(radians));
		
		
		//display value for 90 degrees
		degrees = 90;
		radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n",degrees,radians,Math.sin(radians),Math.cos(radians),Math.tan(radians));
		
		
		//display value for 120 degrees
		degrees = 120;
		radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n",degrees,radians,Math.sin(radians),Math.cos(radians),Math.tan(radians));
		
		
		//display value for 150 degrees
		degrees = 150;
		radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n",degrees,radians,Math.sin(radians),Math.cos(radians),Math.tan(radians));
		
		
		//display value for 180 degrees
		degrees = 180;
		radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n",degrees,radians,Math.sin(radians),Math.cos(radians),Math.tan(radians));
		
		
	}

}
