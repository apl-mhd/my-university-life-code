int print(int n){
	 int x;
	 if(n==2)
		return 0;
	 
		
	 for(int i=1; i<=2; i++){
		 
		 x =( i + print(n+1));
		
		 cout<<x<<" "; 
	}
			
	return x;
}