#include<iostream>
#include <iomanip>
using namespace std ;
int main (){
	string name = "Meerab Ejaz" ;
	long id = 260213235 ;
	cout << "student name :" << name <<endl ;
	cout << "student id :" << id  <<endl;
//	extract 5digits 
int digit1, digit2, digit3, digit4,digit5;
digit1 = (id/10000000)%10;  //divided=26, mode=6 
digit2 = (id/100000)%10;  //divided=02, mode=2 
digit3 = (id/10000)%10;  //divided=21, mode=1
digit4 = (id/1000)%10;  //divided=13, mode=3
digit5 = (id/10)%10;  //divided=23, mode=3

cout << digit1 << "  "<< digit2 << " "<< digit3 << " " 
<< digit4 << "," << digit5 << endl;
//	step2 : Assign Digits to Service Desk 
int network = digit1 ;
int Computer_Lab_Support =  digit2;
int LMS_Support = digit3;
int Account_Support = digit4;
int Hardware_Support = digit5;

//	Step 4 - Calculate the Estimated resolution time measurement

int  num = 20 ;
int t1 = num*network ;
int t2 = num*Computer_Lab_Support;
int t3 = num*LMS_Support;
int t4 = num*Account_Support;
int t5 = num*Hardware_Support;

//	Step 5 - Workload Classification

int heavy=0 , light=0 , modrate=0 ;
cout << "\n----- university IT Helpdesk WorkLoad report --------\n";
cout << "--------------------------------------------------------\n";
cout << left << setw (25) << "unit" << setw(17) << "Total Tickets" 
<<setw (20) << "resolution time " << "status" <<endl ;

cout << left << setw(25)<< "Network Support "  << setw(17) <<digit1 << setw(20) <<t1  ;
if (network>=7){
	cout<<"heavy\n";
	heavy++;
}
else if (network>=4){
	cout<<"modrate\n";
	modrate++;
}
else {
	cout<<"light\n" ;
	light++;
	
}

cout << left << setw(25)<< "Computer_Lab_Support "  << setw(17) <<digit2 << setw(20) <<t2 ;
if (Computer_Lab_Support>=7){
	cout<<"heavy\n";
	heavy++;
}
else if (Computer_Lab_Support>=4){
	cout<<"modrate\n";
	modrate++;
}
else {
	cout<<"light\n" ;
	light++;
}

cout << left << setw(25)<< "LMS_Support  "  << setw(17) <<digit3 << setw(20) <<t3 ;
if (LMS_Support >=7){
	cout<<"heavy\n";
	heavy++;
}
else if (LMS_Support >=4){
	cout<<"modrate\n";
	modrate++;
}
else {
	cout<<"light\n" ;
	light++;
}

cout << left << setw(25)<< "Account_Support  "  << setw(17) <<digit4 << setw(20) <<t4 ;
if (Account_Support >=7){
	cout<<"heavy\n";
	heavy++;
}
else if (Account_Support >=4){
	cout<<"modrate\n";
	modrate++;
}
else {
	cout<<"light\n" ;
	light++;
}

cout << left << setw(25)<< "Hardware_Support  "  << setw(17) <<digit5 << setw(20) <<t5 ;
if (Hardware_Support>=7){
	cout<<"heavy\n";
	heavy++;
}
else if (Hardware_Support >=4){
	cout<<"modrate\n";
	modrate++;
}
else {
	cout<<"light\n" ;
	light++;
}

cout<<"------------summary------" <<endl;
cout << "Light disk : " << light <<endl ;
cout << "Moderate disk : " << modrate <<endl ;
cout << "Heavy disk : " <<heavy <<endl ;

}
