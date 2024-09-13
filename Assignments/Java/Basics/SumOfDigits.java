class SumOfDigits{
	public static void main(String[] args){
		int num = 4502;
		int sum = 0;
		while(num != 0){
			int res = num % 10;
			sum += res;
			num /= 10;
		}
		System.out.println(sum);
	}
}