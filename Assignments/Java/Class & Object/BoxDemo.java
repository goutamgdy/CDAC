class BoxDemo{
	public static void create(Box[] boxarr){
		boxarr[0] = new Box(10,10,10);
		boxarr[1] = new Box(5,5,5);
		boxarr[2] = new Box();
	}
	public static  void volDisplay(Box[] boxarr){
		for(int i=0;i<boxarr.length;i++){
			System.out.println(boxarr[i].volume() + " ");
		}
	}
	public static void main(String[] args){
		Box[] boxarr = new Box[3];
		create(boxarr);
		volDisplay(boxarr);
	}
}