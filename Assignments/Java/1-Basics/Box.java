class Box{
	int height;
	int width;
	int depth;
	
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