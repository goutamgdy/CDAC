class IsPrime{
	public static void main(String[] args){
		int num = 140;
		boolean flag = false;
		for(int i = 2; i < num / 2;i++){
			if(num % i == 0){
				flag = !flag;
				
			}
		}
		if(flag){
			System.out.println(num +" is not a prime number !!");
		}
		else{
			System.out.println(num + " is a prine number !!");
		}
	}
}