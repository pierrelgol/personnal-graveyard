package main;

public class Cell {
	
	static final String DEFAULT_STR = "[_]";
	
	private String representation;
	
	public Cell() {
		getDefaultValue();
	}
	
	private void getDefaultValue() {
		this.setRepresentation(DEFAULT_STR);
	}

	public String getRepresentation() {
		return representation;
	}

	public void setRepresentation(String representation) {
		this.representation = representation;
	}
}
