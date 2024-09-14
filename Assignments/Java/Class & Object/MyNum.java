class MyNumber{
	private  int num;
	public MyNumber(){
		num = 0;
	}
	public MyNumber(int num){
		this.num = num ;
	}
	public boolean isPositive(){
		if(num > 0){
			return true;
		}
		return false;
	}
	public boolean isNegative(){
		if(num < 0){
			return true;
		}
		return false;
	}
	public boolean isZero(){
		if(num == 0){
			return true;
		}
		return false;
	}
	public boolean isOdd(){
		if(num % 2 != 0){
			return true;
		}
		return false;
	}
	public boolean isEven(){
		if(num%2 == 0){
			return true;
		}
		return false;
	}
}


class MyNum{
	public static void main(String[] args){
		MyNumber n1 = new MyNumber(100);
		if(n1.isOdd()){
			System.out.println("Odd !!");
		}
		else{
			System.out.println("Even !!");	
		}
	}
}
















