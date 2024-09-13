class Pettern2{
	public static void main(String[] args){
		int n = 4;
		int k = 1;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<= n - i - 1 ;j++){
				System.out.print(k + " ");
			}
			k++;
			System.out.println();
		}
	}
}