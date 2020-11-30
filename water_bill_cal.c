#include <stdio.h>
int main(){

//Headding	
	printf("\n\n\t\t    ---------------------------------\n");
	printf("-------------------- SRI LANKA WATER BILL CALCULATER -------------------\n");
	printf("\t\t    ---------------------------------\n\n");


//Input the data
	int units, days;
	float amount, perday, tot, fix, tax;

	printf("Enter the number of units : ");
	scanf("%d",&units);

	printf("Enter the number of days  : ");
	scanf("%d",&days);


//calculation for amount
	if (units <= 5){
	amount = units*5;
	}

	else if(units <= 10){
	amount = 25 + (units-5)*10;
	}

	else if (units <= 15){
	amount = 25 + 50 + (units-10)*15;
	fix = 50;
	}

	else if (units <= 20){
	amount = 25 + 50 + 75 + (units-15)*40;
	fix = 80;
	}

	else if (units <= 25){
	amount = 25 + 50 + 75 + 200 + (units-20)*58;
	fix = 100;
	}

	else if (units <= 30){
	amount = 25 + 50 + 75 + 200 + 290 + (units-25)*88;
	fix = 200;
	}

	else if (units <= 40){
	amount = 25 + 50 + 75 + 200 + 290 + 440 + (units-30)*105;
	fix = 400;
	}

	else if (units <= 50){
	amount = 25 + 50 + 75 + 200 + 290 + 440 + 1050 + (units-40)*120;
	fix = 650;
	}

	else if (units <= 75){
	amount = 25 + 50 + 75 + 200 + 290 + 440 + 1050 + 1200 + (units-50)*130;
	fix = 1000;
	}

	else if (units > 75){
	amount = 25 + 50 + 75 + 200 + 290 + 440 + 1050 + 1200 + 3250 + (units-75)*140;
	fix = 1000;
	}

//display the recipt
	printf("\n\n\tYour usage charge       :   %.2f LKR\n",amount);

	printf("\n\tFixed charges           :   %.2f LKR\n\n",fix);

	tax = (amount + fix)*12/100;
	printf("\n\tTax charges(12 precent) :   %.2f LKR\n\n",tax);

	printf("			          ----------------");

	tot = amount + fix + tax;
	printf("\n\tTotal charge            :   %.2f LKR\n",tot);

	perday = tot/days;
	printf("\n\tCharge per day          :   %.2f LKR\n",perday);

	printf("			          ----------------\n\n\n");


//Footer	
	printf("\n\t\t          -------------------\n");
	printf("-------------------------- T H A N K   Y O U --------------------------\n");
	printf("\t\t          -------------------\n\n");


return 0;
}
