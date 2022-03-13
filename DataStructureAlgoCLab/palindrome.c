


#include <stdio.h>

int sum =0;

int palindrom(int number, int decimal, int mod){

	
	if(number == 0)
	
		return 0;
	else{
		
		
		mod = number % 10;
		
		//printf("%d\n", mod);
		number = number / 10;
				printf("%d\n", number);

		
		sum = sum + (mod*decimal);
		
		decimal = decimal * 10;
		
		
		}
		
		
		palindrom(number, decimal, mod);


}

int main(int argc, char **argv)
{
	
	
	int number, mod, n=1;
	
	scanf("%d",&number);
	
	palindrom(number, n, mod);
	printf("%d", sum);

	
	
	return 0;
}