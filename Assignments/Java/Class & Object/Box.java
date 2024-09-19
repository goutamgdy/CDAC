class Box{
	int height;
	int width;
	int depth;
	
	public Box(){
		height = 1;
		width = 1;
		depth = 1;
	} 
	public Box(int h, int w, int d){
		height = h;
		width = w;
		depth = d;
	}
	public void display(){
		System.out.println("Height: " + height + " Width: " + width + " Depth: " + depth);
	}
	public  int volume(){
		return height * width * depth;
	}
	public void accept(int h, int w, int d){
		height = h;
		width = w;
		depth = d;
	}
}