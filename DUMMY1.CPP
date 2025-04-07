#include<iostream.h>
#include<conio.h>

main(){
clrscr();
int econ=40,standard=60,suv=80,lux=100;
int gpsrate=10,insurancerate=20,childrate=15;
int car,day;
int rentcost,addcost=0,distot,total;
int gps,insurance,child;
int totadd=0,totrent=0,finalamt=0;

cout<<"What type of vehicle would you like to rent?"<<endl;
cout<<"1. ECONOMY"<<endl;
cout<<"2. STANDARD"<<endl;
cout<<"3. SUV"<<endl;
cout<<"4. LUXARY"<<endl;
cout<<"CHOOSE NUMBER(1-4):";
cin>>car;

switch (car){
case 1:rentcost=econ;break;
case 2:rentcost=standard;break;
case 3:rentcost=suv;break;
case 4:rentcost=lux;break;
default:
	cout<<"invalid";
}

cout<<"HOW LONGWOULD YOU LIKE TO RENT? "<<endl;
cin>>day;

cout<<"HERE ARE ADDITIONAL SERVICES"<<endl;
cout<<"PRESS 1 IF YES, 2 FOR NO"<<endl;

cout<<"GPS?"<<endl;
cin>>gps;
if(gps==1){
	addcost+=gpsrate;
	}
cout<<"INSURANCE?"<<endl;
cin>>insurance;
if(insurance==1){
	addcost+=insurancerate;
	}
cout<<"CHILD SEAT?"<<endl;
cin>>child;
if(child==1){
	addcost+=childrate;
	}
cout<<"RENTAL COST PER DAY: "<<rentcost<<endl;
cout<<"ADD SERVICES COST PER DAY: "<<addcost<<endl;
cout<<"RENTEL DURATION(DAYS): "<<day<<endl;
totrent=day*rentcost;
totadd=day*addcost;
cout<<"TOTAL RENTAL COST: "<<totrent<<endl;
cout<<"RENTAL ADDITIONAL SERVICES COST: "<<totadd<<endl;
cout<<"DISCOUNT 10%: "<<totrent*.10<<endl;


if(day>7){
distot=totrent*.10;
total=day*(rentcost+addcost);
finalamt=total-distot;
cout<<"DISCOUNTED TOTAL: "<<finalamt<<endl;

}
else{
total=day*(rentcost+addcost);
cout<<"TOTAL: "<<total<<endl;
}



getch();
}