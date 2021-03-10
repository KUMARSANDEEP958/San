//Thanks For Using this cxode//
#include<iostream> 
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;

 int main( ) 
 {  int k=0; 
 while (k<=70){  //per day 70 persons can take water 
 
    system("Color 7c");  // iam using colouring it is useful while using LED screen//
	int x;
    cout<<"Enter 5 rupees"<<endl;
    cin>>x;             // i am taking input as x //
    system("cls");
    int sec=30;
  if (sec==30){
	cout<<"Water Started coming ....\nWELCOME , i am Sandeep\n  ....Please Collect Water";
	Sleep(2000);
   while (sec <= 30) {  
    system("cls");
	Sleep(500);
    cout <<"Time Remaning is : "<< sec<<endl;
    Sleep(500);
    sec-=1; 
	if (sec<29){
		system("Color ed");
    	};
	if (sec<20){
		system("Color e8");
    	};
	if (sec<10){
		system("Color e5");
    	};    	
    if (sec==-1){
    	system("Color ec");
      	cout<<" . Water has Stopped .\n";
      	cout<<" * Thank you Visit Again * \n";
      break;
	  }
     }
  }
}}          // while i am  using coloroma process  get delay of avg 3 sec//
   

