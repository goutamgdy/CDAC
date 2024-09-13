class CalcDemo{
	public static void main(String[] args){
		Calculator c1 = new Calculator();
		c1.accept(12, 10);
		System.out.println(c1.add());
		System.out.println(c1.subtract());
		System.out.println(c1.multiplication());
		System.out.println(c1.division());
	}
}