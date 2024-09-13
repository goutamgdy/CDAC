class ReverseOfNumber{
	public static void main(String[] args){
		int num  =  153;
		int n = num;
		int sum = 0;
		while(num != 0){
			int res = num % 10;
			sum  = (sum * 10) + res;
			num /= 10;
		}
		System.out.println("reverse of the " + n + " is " + sum);
	}
}