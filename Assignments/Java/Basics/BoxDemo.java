class BoxDemo{
	public static void main(String[] args){
		Box b1 = new Box();
		b1.accept(1,1,1);
		b1.display();
		System.out.println("Volume: " + b1.volume());
	}
}