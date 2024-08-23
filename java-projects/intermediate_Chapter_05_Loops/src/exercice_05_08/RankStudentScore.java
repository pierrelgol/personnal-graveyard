package exercice_05_08;

import java.util.Scanner;

public class RankStudentScore {

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

		long startRuntime = System.nanoTime();
		double highestScore = getHighScore(scoreOfStudents);
		int highestScoreIndex = getHighScoreIndex(scoreOfStudents, highestScore);
		String nameOfHighestScorer = nameOfStudents[highestScoreIndex];
		System.out.println(nameOfHighestScorer + " has the highest score of : " + highestScore);
		long endRuntime = System.nanoTime();
		System.out.println("Runtime ms = "+(endRuntime - startRuntime)/1000000.0);

	}

	private static int getHighScoreIndex(double[] scoreOfStudents, double highScore) {
		int highScoreIndex = 0;
		for (int i = 0; i < scoreOfStudents.length; i++) {
			if (highScore == scoreOfStudents[i])
				highScoreIndex = i;
		}
		return highScoreIndex;
	}

	private static double getHighScore(double[] scoreOfStudents) {
		double highScore = 0;
		for (int i = 0; i < scoreOfStudents.length; i++) {
			if (highScore < scoreOfStudents[i])
				highScore = scoreOfStudents[i];
		}
		return highScore;
	}

	private static double getScoreOfStudents() {
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

	@SuppressWarnings("unused")
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
