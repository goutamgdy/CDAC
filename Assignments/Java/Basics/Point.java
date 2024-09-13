class Point{
	int x;
	int y;
	public void accept(int x, int y){
		this.x = x;
		this.y = y; //This is nothing but refernce variable to current instance
	}
	public void display(){
		System.out.println("X: " + x +" Y: " + y);
		System.out.println("[" + x + "," + y + "]");
	}
}