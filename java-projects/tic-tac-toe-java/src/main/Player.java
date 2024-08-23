package main;

public class Player {
	
	private String name;
	private char playerSymbol;
	private Boolean isTurn;
	private Boolean isWinner;
	
	public Player() {}
	
	public Player(String name, char symbol) {
		this.setName(name);
		this.setPlayerSymbol(symbol);
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public char getPlayerSymbol() {
		return playerSymbol;
	}

	public void setPlayerSymbol(char playerSymbol) {
		this.playerSymbol = playerSymbol;
	}

	public Boolean getIsTurn() {
		return isTurn;
	}

	public void setIsTurn(Boolean isTurn) {
		this.isTurn = isTurn;
	}

	public Boolean getIsWinner() {
		return isWinner;
	}

	public void setIsWinner(Boolean isWinner) {
		this.isWinner = isWinner;
	}
}