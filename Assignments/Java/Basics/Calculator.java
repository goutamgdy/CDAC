class Calculator{
	int num1;
	int num2;
	public void accept(int num1, int num2){
		this.num1 = num1;
		this.num2 = num2;
	}
	public int add(){
		return num1 + num2;
	}
	public int subtract(){
		return num1 - num2;
	}
	public int multiplication(){
		return num1 * num2;
	}
	public double division(){
		return num1 / num2;
	}
}