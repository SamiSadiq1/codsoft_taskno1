#include<iostream>
 using namespace std;
 int main(){
 
 int secretNum=8;
 int guess;
 int guesscount=0;
 int guesslimit=3;
 bool outofguesses=false;
 while(secretNum!=guess && !outofguesses){
 	if(guesscount<guesslimit){
 		cout<<"enter guess num"<<endl;
 		cin>>guess;
 		guesscount++;
	 
}
   else
	 { 
	   outofguesses=true;
	 } 
}
	 if(outofguesses){
	 	cout<<"You Lose !"<<endl;
	 }
	 
	 else
	 	{
	 		cout<<"You Win !"<<endl;

 
}
}
