class PerfactOrNot{
	public static void main(String[] args){
		int num = 5;
		int sum = 0;
		for(int i = 1;i<=num/2;i++){
			if(num % i == 0){
				sum += i;
			}
		}
		if(sum == num){
			System.out.println( num + " is a perfact number !!");
		}
		else{
			System.out.println(num + " is not a perfact number !!");
		} 
	}
}