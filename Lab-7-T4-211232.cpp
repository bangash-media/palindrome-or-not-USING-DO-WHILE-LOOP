#include <iostream>

using namespace std;
/*program that inputs a number and checks whether it is a palindrome or not*/
int main() 
{
	int x,flip,y=10,num,store=0;  //variables and constants declaration
	cout<<"\n\n\t\tPalindrome number Identifier";
	cout<<"\n\nEnter a number: "; cin>>num; //input from user
	x=num; //stores value of num into x, So that we can use it on end "If" call
	cout<<endl<<endl;
	do 
	{
		flip=num%y;  //stores the value of remaider into flip
		cout<<flip; //will display the updated stored value in flip
		store=(store*10)+flip; //"store" will store the totall value at the end of loop
		num=num/y; //will tells about the number of repetition of loop
			
	}while(num!=0); //termination condition of loop
    if (store==x) //when value of x, which is actually num becomes = value in store, then palindrome.
    cout<<" Is a Palindrome number";
    else
    cout<<" Is NOT a Palindrome number";
	return 0;
}

