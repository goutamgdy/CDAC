class Fibonacci{
	public static void main(String[] args){
		int term = 10;
		int pre = 0;
		int pre1 = 1;
		System.out.print(pre + " " + pre1 +" ");
		for(int i = term;i>2;i--){
			int temp = pre + pre1;
			pre = pre1;
 			pre1 = temp;
			System.out.print(temp + " ");
		}
	}
}