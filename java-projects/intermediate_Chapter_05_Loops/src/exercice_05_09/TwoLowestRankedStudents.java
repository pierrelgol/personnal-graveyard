package exercice_05_09;

import java.util.Scanner;

public class TwoLowestRankedStudents{

	public static void main(String[] args) {
		promptMessage("Enter the number of students :");
		int numberOfStudents = getNumberOfStudentsInput();

		String[] nameOfStudents = new String[numberOfStudents];
		for (int i = 0; i < nameOfStudents.length; i++) {
			nameOfStudents[i] = getNameOfStudents();
		}

		double[] scoreOfStudents = new double[numberOfStudents];
		for (int i = 0; i < scoreOfStudents.length; i++) {
			scoreOfStudents[i] = getScoreOfStudents();
		}

		//Lowest Score
		double lowestScore = getLowestScore(scoreOfStudents);
		int lowestScoreIndex = getScoreIndex(scoreOfStudents, lowestScore);
		String nameOfLowestScorer = nameOfStudents[lowestScoreIndex];
		System.out.println(nameOfLowestScorer + " has the lowest score of : " + lowestScore);

		//Second Lowest Score
		double nextLowestScore = getNextLowestScore(scoreOfStudents, lowestScore);
		int nextlowestScoreIndex = getScoreIndex(scoreOfStudents, nextLowestScore);
		String nameOfNextLowestScorer = nameOfStudents[nextlowestScoreIndex];
		System.out.println(nameOfNextLowestScorer + " has the second lowest score of : " + nextLowestScore);
	}

	private static  double getScoreOfStudents() {
		promptMessage("Enter the scores of students :");
		Scanner input = new Scanner(System.in);
		return input.nextDouble();
	}

	private static String getNameOfStudents() {
		promptMessage("Enter the names of students :");
		Scanner input = new Scanner(System.in);
		return input.next();
	}

	private static int getNumberOfStudentsInput() {
		Scanner input = new Scanner(System.in);
		return input.nextInt();
	}

	private static void promptMessage(String string) {
		System.out.println(string);
	}

	private static int getScoreIndex(double[] scoreOfStudents, double score) {
		for (int i = 0; i < scoreOfStudents.length; i++) {
		if (score == scoreOfStudents[i]) return i;
		} return -1;
	}

	private static double getLowestScore(double[] scoreOfStudents) {
		double lowestScore = scoreOfStudents[0];
		for (int i = 0; i < scoreOfStudents.length; i++) {
		if (lowestScore > scoreOfStudents[i]) lowestScore = scoreOfStudents[i];
		}return lowestScore;

	}

	private static double getNextLowestScore(double[] scoreOfStudents, double lowestScore) {
		double nextLowestScore = 999999999;
		for (int i = 0; i < scoreOfStudents.length; i++) {
		if (nextLowestScore > scoreOfStudents[i] && scoreOfStudents[i] !=lowestScore) nextLowestScore = scoreOfStudents[i];
		} return nextLowestScore;
	}

	private static void quickSort(double[] scoreOfStudents) {
		double currentMin = scoreOfStudents[0];
		int currentMinIndex = 0;
		for (int i = 0; i < scoreOfStudents.length - 1; i++) {
			currentMin = scoreOfStudents[i];
			currentMinIndex = i;
			for (int j = i + 1; j < scoreOfStudents.length - 1; j++) {
				if (currentMin > scoreOfStudents[j]) {
					currentMin = scoreOfStudents[j];
					currentMinIndex = j;
				}
			}

			if (currentMinIndex != i) {
				scoreOfStudents[currentMinIndex] = scoreOfStudents[i];
				scoreOfStudents[i] = currentMin;
				for (double x : scoreOfStudents)
					System.out.print(x);
			}

		}

	}
}