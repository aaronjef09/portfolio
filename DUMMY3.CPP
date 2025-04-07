#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
double birthyr,age=0,amt,finalamt,discount,dist,showdiscount;
cout<<"ENTER YOUR BIRTHYEAR: ";
cin>>birthyr;
	age=2024-birthyr;
cout<<"Your age as of this year 2024 is: "<<age<<endl;
cout<<"ENTER AMOUNT:";
cin>>amt;


if((amt>1000)&&(amt<=5000)){
	cout<<"YOU HAVE 5% DISCOUNT";endl;
	discount = 0.05;
}
else if((amt>5000)&&(amt<=10000)){
	cout<<"YOU HAVE 10% DISCOUNT";endl;
	discount = 0.10;
}
else if(amt>10000){
	cout<<"YOU HAVE 15% DISCOUNT";endl;
	discount = 0.15;
}

	if (age>=60){

cout<<"\nYOU ARE ABOVE 60 YEARS OLD, ADDITIONAL 5% DISCOUNT";endl;
		discount += 0.05;
	}
	else if (age<18){
cout<<"\nYOUR AGE IS LESS THAN 18 YEARS OLD,ADDITIONAL 10% DISCOUNT";endl;
		discount += 0.10;
	}
finalamt = amt -(amt*discount);
dist = discount*100;
cout<<"\nTOTAL DISCOUNT: "<<dist<<"%"<<endl;
cout<<"ORIGINAL AMOUNT: "<<amt<<endl;
showdiscount=amt*discount;
cout<<"DISCOUNT AMOUNT: "<<showdiscount<<endl;
cout<<"TOTAL AMOUNT WITH DISCOUNTS: "<<finalamt<<endl;



getch();
}
