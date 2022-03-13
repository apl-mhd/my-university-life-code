#include<stdio.h>
void spendMoney(int n){
n = n - 1;
if(n < 0)
    return;


spendMoney(n); /* function calls itself */

printf("Your wallet balance: %d\n",n);

}
int main(){
printf("Hello Mr. COBB!\n");
spendMoney(5);
return 0;
}