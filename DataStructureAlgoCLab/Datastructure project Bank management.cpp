#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <map>
#include <time.h>
#include <cstdlib>
#define clear()  system("@cls||clear");
using namespace std;

void createAccount();
void updateInfo();
void displayAll();
void transaction();
void removeAC();
void existingAccount();

void mTotext(int tk){
	int coin[5] = {10000000,100000,1000,100,0};

     map<int, string>moneyText;
     moneyText[0] = "";
	 moneyText[1]  ="One";  moneyText[2] ="Two";
     moneyText[3] ="Three";  moneyText[4] ="Four";
     moneyText[5] ="Five";  moneyText[6] ="Six";
     moneyText[7] ="Seven"; moneyText[8] ="Eight";
     moneyText[9] ="Nine";

    moneyText[10] ="Ten"; moneyText[14] ="Fourteen";
     moneyText[11] ="Eleven"; moneyText[15] ="Fifteen";
     moneyText[12] ="Tweleve"; moneyText[16] ="Sixteen";
     moneyText[13] ="Thirteen"; moneyText[17] ="Seventeen";
	 moneyText[18] ="Eighteen";   moneyText[19] ="Nineteen";

	 moneyText[20] ="Twenty"; moneyText[30] ="Thirty";
	 moneyText[40] ="Fourty";  moneyText[50] ="Fifty";
     moneyText[60] ="Sixty";  moneyText[70] ="Seventy";
	 moneyText[80] ="Eighty";  moneyText[90] ="Ninety";
     moneyText[100] ="Houndred";

      moneyText[1000] ="Thousand"; moneyText[100000] ="Lakh";
      moneyText[10000000] ="Crore";

    int  i = 0,index=0,reminder;
    int money[10] = {0};



    while( i != 5){

        if(coin[i] <=tk){ /* checking tk*/
			if(i==4){ /*if tk less than 100*/
				money[index]=tk;/*push  tk*/
				i++;
				}
        else{
            reminder = tk / coin[i];
			money[index] = reminder; /*push how many times ocurs same tk*/
			money[index+1] = coin[i]; /*push tk*/

            tk = tk % coin[i]; /*reminder amount*/
            i++;
            index+=2;
	} /*end else*/

    }

    else
        i++;

}/*end if*/


    int  tenth, oneth;
    for(i=0; i<=index; i++){
            if(money[0] ==0){
				cout<<"Zerro"<<" ";
				break;
			}

        if(money[i]> 20){ /* if money is greater than 20*/

            tenth = (money[i] /10) *10;
            oneth = money[i] % 10;
            cout<<moneyText[tenth]<<" "<<moneyText[oneth]<<" ";
        }
    else
		cout<<moneyText[money[i]]<<" ";

		}

	cout<<"Tk";

	}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

bool exist(char id[100]){ /*vheck acount exist or not*/
	FILE *outFile;
	int count =0;
	char name[100];
	outFile = fopen("infile.txt", "r");
	while((fscanf(outFile, "%s", name)) !=EOF){

		if(strcmp(name, id)==0 && count==0){

            fclose(outFile);
			return true;
		}
		count++;
		if(count == 8)
			count=0;

	}

	fclose(outFile);

	return false;
}

void menu(){ /*main menu*/

	clear();
	int x;
	cout<<"\n\t\t\tCUSTOMER ACCOUNT BANKINGMANAGEMENT SYSTEM\n";
	printf("\n\n\t\t\t %c%c%c%c WELCOME TO THE MAIN MENU %c%c%c%c\n",178,178,178,178,178,178,178,178);

	cout<<"\n\t\t\t1.Create new account\n";
	cout<<"\t\t\t2.Update information of existing account\n";

	cout<<"\t\t\t3.For transaction\n";
	cout<<"\t\t\t4.Check the details of existing account\n";

	cout<<"\t\t\t5.Removing existing account\n";
	cout<<"\t\t\t6.View customers's  list\n";

	cout<<"\t\t\t7.Exit\n";
	cout<<"\n\n\t\t\tEnter Your chosice:";
	cin>>x;
	if(x==1) createAccount();
	if(x==2) updateInfo();
	if(x==3) transaction();
	if(x==4) existingAccount();
	if(x==5) removeAC();
	if(x==6) displayAll();
	if(x==7) exit(0);
	clear();
		cout<<"Invalid Input:\n";
		menu();
}



void logIn(){/*loging section*/

	int pass, x;
	cout<<"\n\n\t\t\tEnter the password to login:";
	cin>>pass;
	if(pass != 1234){
    clear();
	cout<<"\n\n\n\t\t\tWrong Password\n";
	cout<<"\n\n\t\tEnter 1 to try again and 0 to exit:";
		cin>>x;
		if(x==1){
			clear();
		logIn();

	}
		else
			  exit(0);
}
	else{
	    clear();
        cout<<"\n\n\n\n\t\t\t\tPassword Match!";
        cout<<"\n\t\t\t\tLogin";
        for(int i=0; i<10; i++){
		delay(200);
		cout<<".";
        }
		menu();
}
		return;
	}

int main(int argc, char **argv)

{
	logIn(); /*if don not match then recursivly call login() function*/

	return 0;
}

void menuOrexit(int choice){ /*bakt to main menu*/
	int x;
	cout<<"\n\t\tEnter 1 go to the main menu and 0 to exit:";
	cin>>x;
	if(x==1){
	clear();
		menu();
	}
	else if(x==0){
		exit(0);
		}

	else{

		clear();
		cout<<"invalid input";
		menuOrexit(choice); /*if input invalid then menuOrexit(choice); function call again*/
		}


}


void zero1two(int x, int choice){ /*gotot try again, exit or return to main menu*/

	cout<<"\n\t\tEnter 0 to try again, 1 to return main menu and 2 to exit:";
	cin>>x;
	if(x==1){
	//clear();
		menu();
	}
	else if(x==0){
		if(choice == 21) updateInfo();
		if(choice == 3) transaction();
		if(choice == 5) removeAC();
		if(choice == 6) updateInfo();

		}
	else if(x==2)
		exit(0);

	else{

		clear();
		cout<<"invalid input";
		menuOrexit(choice);
		}


}


void createAccount(){ /*create account*/

	string tDate;
	char name[100];
	//char email[100];
	char address[100];
	char birthDay[100];
	char phone[100];
	char acountNumber[100];
	int nid;
	int age;
	int deposit;

	FILE *inFile;

	inFile = fopen("infile.txt", "a+");

	clear();
		printf("\t\t\t %c%c%c%c Add record %c%c%c%c\n\n",178,178,178,178,178,178,178,178);


	cout<<"Enter today's date(mm/dd/yyyy):";
	cin>>tDate;

	cout<<"\nEnter the acount number:";
	scanf("%s",acountNumber);
	if(exist(acountNumber) == true ){ /*check acount exist or not*/
        clear();
		cout<<"\n\n\t\tAccount number  already in used try again:";
		delay(1700);
		createAccount(); /*if id invalid then function call again*/
		}


	cout<<"\nEnter the name:";
	scanf("%s", name);

	cout<<"\nEnter the date of birth(mm/dd/yyyy):";
	scanf("%s", birthDay);

	cout<<"\nEnter the age:";
	scanf("%d", &age);

	cout<<"\nEnter the address:";
	scanf("%s", address);

	cout<<"\nEnter the NID number:";
	scanf("%d", &nid);

	cout<<"\nEnter the phone number:";
	scanf("%s", phone);


	cout<<"\nEnter the amount to deposit:";
	scanf("%d", &deposit);


	fprintf(inFile, "%s %s %s %d %s %d %s %d\n", acountNumber, name,
	 birthDay, age, address,nid,phone,deposit);

	 fclose(inFile);
	 cout<<"\nAccount Created successfully\n";

    menuOrexit(10);

	}

void updtPhoneAdd(char id[]){
	clear();
	FILE *outFile,*copyFile;
	char name[100];
	char updt[100];
	int count=0, flag=1,locate, x;
	outFile = fopen("infile.txt", "r");
	copyFile = fopen("copy.txt", "w");

	cout<<"Which  information do you want to change\n\n";
	cout<<"1. Address:\n";
	cout<<"2. Phone:\n";
	cout<<"\nEnter your choice(1 for address and 2 for phone):";
	cin>>x;

	if(x!=1 && x!=2){
	//cout<<x<<endl;
			updtPhoneAdd(id);
	}
	else{
	if(x==1){
	clear();
		cout<<"\n\n\n\t\tEnter the new address:";
		scanf("%s",updt);
		locate=4;
	}
	 if(x==2){
		 clear();
		cout<<"\n\n\n\t\tEnter the new phone:";
		scanf("%s",updt);
		locate=6;

		}


	while((fscanf(outFile, "%s", name)) !=EOF){


		if(strcmp(name, id)==0 && count==0){
			flag =0;
			//cout<<"yes";
		}
		if(flag == 0 &&count == locate)

			fprintf(copyFile, "%s ", updt);
		else

			fprintf(copyFile, "%s ", name);

		if(count == 7)
			fprintf(copyFile, "%c", '\n');
		count++;
		if(count == 8){

			flag =1;
			count=0;

		}


	}

	fclose(outFile);
	fclose(copyFile);
	remove("infile.txt");
	rename("copy.txt", "infile.txt");

	clear();
	cout<<"\n\t\t\t\tChanged saved!\n";


	zero1two(0,6);
	//menuOrexit(0);

}

}


void updateInfo(){/*check id*/

	clear();
	cout<<"\n\nEnter the account NO. of customer whose information you want to change:";
	char id[100];
	scanf("%s", id);
	if(exist(id) !=true){
		clear();
		cout<<"\t\t\t\ninvalid id\n";
		zero1two(0,21);


		}
	else

	updtPhoneAdd(id);/*if id found then call update function */
}

/*
#########################################################
#           Display all account        #
#########################################################
*/
void displayAll(){
	clear();
	FILE  *fileRead;
	fileRead = fopen("infile.txt", "r");

	char ch[100];
	int count=0;
	printf("ACC. NO| \t Name| \t\t Adddress| \t Phone|\n");
	printf("___________________________________________________________\n\n");

	while((fscanf(fileRead,"%s", ch)) !=EOF){

		if(count == 0 || count == 1 || count ==4 || count == 6)
			cout<<ch<<"\t\t";

		count++;
		if(count== 8){
			cout<<endl;
			count=0;
		}

}
printf("___________________________________________________________\n\n");

fclose(fileRead);

	menuOrexit(0);

}


/*
#########################################################
#            Existing Account Removing Part           #
#########################################################
*/
void removeAC(){
clear();

int count=0, flag=1;
char name[100], id[100];
char ch='\n';

cout<<"\n\n\t\tEnter the account NO. of the customer you want to delete:";
	scanf("%s", id);

    if(exist(id)){ /*checking acount exist or not*/
    FILE *orginalFile,*copyFile;

	orginalFile = fopen("infile.txt", "r");
	copyFile = fopen("copy.txt", "w");

	while((fscanf(orginalFile, "%s", name)) !=EOF){


		if(strcmp(name, id)==0 && count==0){
			flag =0;

		}
		if(flag !=0){
			fprintf(copyFile, "%s ", name);
			}
		if(count == 7 && flag !=0)
			fprintf(copyFile, "%c", '\n');

		count++;
		if(count == 8){

			flag =1;
			count=0;

		}
		//1 Orko 20/12/1994 20 Dhaka 1234 01710453438 120
}

	fclose(orginalFile);
	fclose(copyFile);
	remove("infile.txt");
	rename("copy.txt", "infile.txt");
}
else{

	clear();
	cout<<"\n\n\t\t\tRecord not found.\n";
	zero1two(0,5);/*if fail then return main main or exit call again*/

}

	clear();
	cout<<"\n\n\t\tRecord deleted successfully!\n";
	menuOrexit(0);


}

void transaction(){
	clear();
	char id[100];


	char name[100];
	int count=0, flag=1,choice,deposit,x;

	cout<<"\n\n\t\t\tEnter the account number of customer:";
	scanf("%s", id);

	if(exist(id) == true){
		clear();
    cout<<"Do you want to\n"<<endl<<"1. Deposit?"<<endl<<"2. Withdraw\n"<<endl;

    cout<<"Enter your choice(1 for deposit 2 for withdraw):";
    cin>>choice;
    if(choice ==1 ){
		clear();
		 cout<<"\n\n\t\tEnter the amount you want to deposit:";
          cin>>deposit;
    }
    else if (choice ==2){
		clear();
        cout<<"\n\n\t\tEnter the amount you want to withdraw:";
          cin>>deposit;
    }

    FILE *orginalFile,*copyFile;
    orginalFile = fopen("infile.txt", "r");
	copyFile = fopen("copy.txt", "w");

	while((fscanf(orginalFile, "%s", name)) !=EOF){


		if(strcmp(name, id)==0 && count==0){
			flag =0;
			//cout<<"yes";
		}
		if(flag == 0 &&count ==7 ){
			//printf("%s",name);
            if(choice == 1)
			 x = atoi(name)+deposit;
			 else
              x = atoi(name)- deposit;
			fprintf(copyFile, "%d ", x);

			}
		else

			fprintf(copyFile, "%s ", name);

		if(count == 7)
			fprintf(copyFile, "%c", '\n');
		count++;
		if(count == 8){

			flag =1;
			count=0;

		}


	}


	fclose(orginalFile);
	fclose(copyFile);
	remove("infile.txt");
	rename("copy.txt", "infile.txt");
	clear();
	cout<<"\n\n\t\t\t\tSuccess!\n";
	menuOrexit(0);/*if success then menu function call again*/
	//transaction();
}

else{
	clear();
	cout<<"Record not found!\n";
	zero1two(0,3);/*if naot found */

}

}


void existingAccount(){

clear();
int count=0, flag=1,i=0;
char name[100], id[100];
	cout<<"\n\n\t\t\t\tEnter the account number:";
	scanf("%s", id);

	if(exist(id)){
            clear();
	string info[10] =  {"Account NO.:", "Name:", "DOB:", "Age:",
		"Address:","NID No:","Phone NO:", "Amount deposited:BDT "};
	FILE *outFile;

	outFile = fopen("infile.txt", "r");

	while((fscanf(outFile, "%s", name)) !=EOF){

		if(strcmp(name, id)==0 && count==0)
			flag =0;
            if(flag == 0 &&count<8 ){

			//printf("%s\n",name);
                if(i == 7){
                    int m = atoi(name);
                    cout<<info[i++];
                    mTotext(m);
                    cout<<"\n";
				}
                else
                    cout<<info[i++]<<name<<endl;
                    count++;
			}

		else {
		count++;
		if(count == 8){

			flag =1;
			count=0;

		}
}
	}

	fclose(outFile);
}
else{
	clear();
	cout<<"Record not found\n";
}
	menuOrexit(0); /*press 1 for main menu 0 for exit*/

}