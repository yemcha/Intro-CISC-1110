//Lionella Shmakalova
//Assignment 2: Computing Football Statistics
//Reads in id, wins, losses, ties
//Computes average, wip total, and remainig

#include <iostream>
using namespace std;
int main()
{

   int id, total, game_remain, won, lost, tied, wip;
   int numbteams = 0;
   double winavg;
   cout.setf(ios::fixed,ios::floatfield);
   cout.precision(4);

   cout << " This program computes football statistics " << endl;
   cout << " Please type in team id number " << endl;
   cout << " To stop, enter a negative value for team id number " << endl;
   cin >> id;

   while (id >= 0){ //read until user enters a negative value

            cout << " Please enter number of wins " <<endl;
            cin >> won;
            cout << " Please enter number of losses " <<endl;
            cin >> lost;
            cout << " Please enter number of ties " <<endl;
            cin >> tied;
            total = won +tied + lost;
            cout << " Total number of games played " << total << endl;

            if(total == 16)
            cout << "The team season is finished " << endl;
            winavg = (double)won / total;

            game_remain = 16 - total;
            if (total < 16)
            cout << "number of games remaining " << 16 - total << endl;


            if(tied >= won)
            cout << " games tied are greater than or equal to the number won " << endl;
            else
            cout << " games are not greater than or equal to number won " <<endl;

            if(tied >= lost)

            cout << " number of games tied are greater than or equal to lost " <<endl;
            else
            cout << " number of games not greater or equal to lost " <<endl;
            wip = won + tied - 3* lost;
            if (wip > 0)
            cout << " wip total is " << wip <<endl;
            else
                wip = 0;
            cout << " Wip is 0" <<endl;
            if (total < 16)
                cout << " Error, please type in new data " <<endl;

            cout << " Team " << id << " won " << won
                 << " Lost " << lost
                 << " Tied " << tied
                 << " Total number of games played " << total <<endl;
            cout << " Number of games remaining " << game_remain <<endl;
            cout << " Team's winning average " << winavg << endl << endl;
   cout << " Please type in team id number " << endl;
   cout << " To stop, enter a negative value for team id number " << endl;
   cin >> id;
   numbteams ++;
   cout << " Teams processed " << numbteams <<endl;
}
cout << "All the teams have been processed " <<endl;

return 0;
}
