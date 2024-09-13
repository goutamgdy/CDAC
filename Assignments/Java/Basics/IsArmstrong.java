class IsArmstrong{
	public static void main(String[] args){
		int num  =  153;
		int n = num;
		int sum = 0;
		while(num != 0){
			int res = num % 10;
			sum += (res * res * res);
			num /= 10;
		}
		if(sum == n){
			System.out.println( n +" is an armstrong number !!");
		}
		else{
			System.out.println(n + " is not an armstrong number !!");
		}
	}
}