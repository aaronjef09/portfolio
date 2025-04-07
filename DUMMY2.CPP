#include<iostream.h>
#include<conio.h>

main(){
clrscr();

int dog=0,fish=0,bird=0;
cout<<"INSTRUCTION"<<endl;
cout<<"--PRESS 1 IF YES, AND 2 FOR NO--"<<endl;
cout<<"\nWELCOME TO ANIMAL CHECKER PROGRAM"<<endl;
cout<<"--START--"<<endl;

cout<<"IS THE ANIMAL HAS FUR AND BARKS? ";
cin>>dog;
if (dog==1){
	dog=1;
	}



cout<<"IS THE ANIMAL HAS FEATHERS AND CAN FLY? ";
cin>>bird;
if (bird==1){
bird=1;
}

cout<<"IS THE ANIMAL HAS SCALES AND LIVES IN WATER? ";
cin>>fish;
if (fish==1){
fish=1;
}
cout<<"\n"<<endl;
if(dog==1){cout<<"IT'S A DOG"<<endl;}
if(bird==1){cout<<"IT'S A BIRD"<<endl;}
if(fish==1){cout<<"IT'S A FISH"<<endl;}
if(dog!=1&&bird!=1&&fish!=1){
cout<<"\nUNKNOWN ANIMAL"<<endl;
}

getch();
}