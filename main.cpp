#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(time(0));
int const RandNum= rand();
int PlayerNum;
int trails=0;
   cout << "    Welcome to the Number Guessing Game!     "<<endl;
   cout << "    Be careful you have only 100 trails      "<<endl;
   for(trails = 0 ; trails <  100 ; ++trails)
 {
   cout<<"Enter your guess : ";
   cin>>PlayerNum;
  if(PlayerNum==RandNum)
  {
      cout<<"Correct!! you get the number after "<<trails<<" time of guess \n";
      break;
  }
  else if ( PlayerNum >RandNum )
   cout<<"Your guess is higher than the number \n";
   else
   cout<<"Your guess is lower than the number \n";
 }
return 0;
}
