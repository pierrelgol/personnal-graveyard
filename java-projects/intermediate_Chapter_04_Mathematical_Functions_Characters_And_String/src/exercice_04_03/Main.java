package exercice_04_03;

public class Main {

	static final double EARTH_RADIUS_IN_KM = 6371.01;

	public static void main(String[] args) {

		// input = gps location of the following cities : Atlanta, Orlando, Savannah,
		// Charlotte.

		// output = area enclosed by four cities

		// Charlotte (35.2270869,-80.8431267)
		// Savannah (32.0835407,-81.0998342)
		// Orlando (28.5383355,-80.3792365)
		// Atlanta (33.7489954,-84.3879824)

		double charlotteLatitude = 35.2270869;
		double charlotteLongitude = -80.8431267;

		double savannahLatitude = 32.0835407;
		double savannahLongitude = -81.0998342;

		double orlandoLatitude = 28.5383355;
		double orlandoLongitude = -80.3792365;

		double atlantaLatitude = 33.7489954;
		double atlantaLongitude = -84.3879824;

		// computing side and a middle segment used to form two triangles
		double sideCharlotteSavannah = distanceOfTwoPointsOnEarthInKM(charlotteLatitude, charlotteLongitude,
				savannahLatitude, savannahLongitude);
		double sideSavannahOrlando = distanceOfTwoPointsOnEarthInKM(savannahLatitude, savannahLongitude,
				orlandoLatitude, orlandoLongitude);
		double sideOrlandoAtlanta = distanceOfTwoPointsOnEarthInKM(orlandoLatitude, orlandoLongitude, atlantaLatitude,
				atlantaLongitude);
		double sideAtlantaCharlotte = distanceOfTwoPointsOnEarthInKM(atlantaLatitude, atlantaLongitude,
				charlotteLatitude, charlotteLongitude);
		double sideMiddle = distanceOfTwoPointsOnEarthInKM(charlotteLatitude, charlotteLongitude, orlandoLatitude,
				orlandoLongitude);

		// computing triangles area using half perimeter formula
		double areaOfFirstTriangle = computeTriangleArea(sideCharlotteSavannah, sideSavannahOrlando, sideMiddle);
		double areaOfSecondTriangle = computeTriangleArea(sideOrlandoAtlanta, sideAtlantaCharlotte, sideMiddle);

		// displaying output
		double areaEnclosedByCharlotteSavannahOrlandoAtlanta = areaOfFirstTriangle + areaOfSecondTriangle;
		System.out.println("The area enclosed by Charlotte,Savannah,Orlando and Atlanta is "+areaEnclosedByCharlotteSavannahOrlandoAtlanta+" km^2");

	}

	//method to compute two points relative to earth radius, using the great circle distance formula
	static double distanceOfTwoPointsOnEarthInKM(double source1Latitude, double source1Longitude,
			double source2Latitude, double source2Longitude) {
		double source1LatitudeInRad = Math.toRadians(source1Latitude);
		double source1LongitudeInRad = Math.toRadians(source1Longitude);
		double source2LatitudeInRad = Math.toRadians(source2Latitude);
		double source2LongitudeInRad = Math.toRadians(source2Longitude);
		return EARTH_RADIUS_IN_KM * Math
				.acos(Math.sin(source1LatitudeInRad) * Math.sin(source2LatitudeInRad) + Math.cos(source1LatitudeInRad)
						* Math.cos(source2LatitudeInRad) * Math.cos(source1LongitudeInRad - source2LongitudeInRad));

	}

	//method to compute the area of a triangle using the half perimeter formula
	static double computeTriangleArea(double side1, double side2, double side3) {
		double halfPerimeter = (side1 + side2 + side3) / 2;
		double triangleArea = (long) Math
				.sqrt(halfPerimeter * (halfPerimeter - side1) * (halfPerimeter - side2) * (halfPerimeter - side3));
		return triangleArea;

	}

}
