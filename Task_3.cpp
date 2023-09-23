/**
 ******************************************************************************
 * @file           : Task_3.cpp
 * @author         : Mennatallah Karam
 * @brief          : Tic-Tac-Toe game that
                     allows two players to play against each other
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
#include <iostream>
/* ********************** Includes Section End   ********************** */

using namespace std;

/* ********************** Global Variables Section Start ************** */
 char CurrentPlayer='X';
 char PlayAgain = 'y';
 int Row, Col, Moves, Place=0;
 char Board [3][3]={'1','2','3','4','5','6','7','8','9'};
/* ********************** Global Variables  Section End   ************* */

/* ********************** Sub-Program Section Start ************* */
void DisplayBoard(char Board[3][3])
  {
       for(int i=0;i<3;++i)
      {
          for(int j=0;j<3;++j)
          {
              cout <<" "<< Board[i][j] <<"  ";
          }
          cout <<endl<<endl;
      }
  }

  bool WinnerCheck(char Board[3][3],char CurrentPlayer)
  {
      for(int i=0;i<3;++i)
      {
          if ((Board[i][0]==CurrentPlayer) && (Board[i][1]==CurrentPlayer) && (Board[i][2]==CurrentPlayer))
            return true;
           if ((Board[0][i]==CurrentPlayer) && (Board[1][i]==CurrentPlayer) && (Board[2][i]==CurrentPlayer))
            return true;
           if ((Board[0][0]==CurrentPlayer) && (Board[1][1]==CurrentPlayer) && (Board[2][2]==CurrentPlayer))
             return true;
           if((Board[0][2]==CurrentPlayer) && (Board[1][1]==CurrentPlayer) && (Board[2][0]==CurrentPlayer))
             return true;

      }
      return false;
  }
/* ********************** Sub-Program Section End ************* */


int main()
{
while (PlayAgain=='y')
{
    cout<<endl;
    cout <<"************ Welcome to Tic Toe game ************"<<endl;
    Moves=0 ;
    char Board[3][3]={'1','2','3','4','5','6','7','8','9'};

      while (Moves < 9)
      {
          if (Moves==0)
          {
            DisplayBoard(Board) ;
          }

      cout <<" player " <<CurrentPlayer<<" enter your move : ";
      cin >>Place;

      if(Place == 1)
    {
         Row=0;
         Col=0;
         if ((Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer))
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

     else  if(Place == 2)
    {    Row=0;
         Col=1;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

      else if(Place == 3)
    {    Row=0;
         Col=2;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

      else if(Place == 4)
    {    Row=1;
         Col=0;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

      else if(Place == 5)
    {    Row=1;
         Col=1;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

      else if(Place == 6)
    {    Row=1;
         Col=2;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

      else if(Place == 7)
    {    Row=2;
         Col=0;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

      else if(Place == 8)
    {    Row=2;
         Col=1;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win"<<endl;
          break ;
      }
    }

      else if(Place == 9)
    {    Row=2;
         Col=2;
         if ( (Board[Row][Col]=='X')|| (Board[Row][Col]=='O' ))
       {
          cout <<"Invalid move Try again later " <<endl;
          break;
       }

         Board [Row][Col]=CurrentPlayer;

       DisplayBoard (Board) ;
      if (WinnerCheck(Board, CurrentPlayer) )
      {
          cout <<"Congrats player "<<CurrentPlayer<<" Win "<<endl;
          break ;
      }
    }

    else
    {
        cout <<"Invalid move ! "<<endl;
        continue;
    }


      if (CurrentPlayer=='X')
      {
          CurrentPlayer='O';
          Moves++ ;
      }
     else if (CurrentPlayer=='O')
       {
        CurrentPlayer='X';
        Moves ++ ;
       }
     else
      {
       cout <<"Invalid character "<<endl;
       break ;
      }

    if (Moves==9)
      cout <<"It's a draw!"<<endl;

      }


     cout << "Do you want to play again!! "<< endl <<"press 'y' for yes and 'n' for no : ";
     cin >> PlayAgain;
}


return 0;
}





