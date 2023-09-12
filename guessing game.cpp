//Task 2. Number Guessing Game
#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
int i,guess=0,attempt=0;
srand((unsigned int) time (NULL));
int random=rand()%100+1;
cout<<"WELCOME TO THE NUMBER GUESSING GAME"<<endl;
cout<<"-------------------"<<endl;
while(1)
{	cout<<"TO QUIT PRESS -7"<<endl;
cout<<"ENTER NUMBER : "<<endl;
cin>>guess;
if(guess<0)
{   if(guess==-7)
{   cout<<"NUMBER : "<<random<<endl;
cout<<"TRY LUCK NEXT TIME."<<endl;
exit(0);
}
else
cout<<"WRONG INPUT.TRY AGAIN"<<endl;
}
else
{
if(guess==random)
{
cout<<"CONGRATULATION. YOU GUESSED IT"<<endl;
exit(0);
}
else if(guess>random)
{
cout<<"HIGH GUESS.TRY AGAIN"<<endl;

}
else
cout<<"LOW GUESS.TRY AGAIN"<<endl;
}


}
 


return 0;
}
