//Lionella Shmakalova
//this program is about calling on functions for working with test scores
//the program will represents 3 tests scores of students
//the programs call on a function to determine validity of the 3 test scores
//If valid, main prgm will call on other functions to classify scores in various way
//Repeat process for 20 groups of various types
//Print counters
#include <iostream>
using namespace std;

void introduction()
bool aretheyvalid(int, int, int));
void aretheysame (int, int, int );
int round score (int);

int main();
{
    int score1, int score2, int score2;
    int total_count=0, valid_count=0, invalid_count=0;

    //this is function is called introduction
    //and is a void function with no parameters
    //and doesn't return anything.
    //This function summarizes the purpose of program Assignment 4
    void introduction()
    {
        cout<<"Assignment 4 is a program that computes 3 test scores of a student";
              " main program reads in 3 integers to represent the scores and prints."<<
              " main program calls on functions to explain the purpose of the program,"<<
              " to determine the validity of the 3 scores,"<<
              " if valid, compare the three scores in various ways,"<<
              " and rounds the integer."<<
              " to end the program type in -1, -1, -1"<<endl;
    }

    while (score1!= -1||score2!= -1||score3!= -1)
    {
          total_count++;

          cout<< "Please type in three test scores"<<endl;
          cin>>score1 >> score2 >> score3;
          cout<< "you typed in first score"<<
                 "test first test score"<<score1<<endl;
                 "second test score"<<score2<<endl;
                 "third test score"<<score3<<endl;
    }


    //this is a function called aretheyvalid
    //it has three parameters: int a, int b, int c
    //returns a message if valid or not
    //this function determines if this group is valid or not
    bool aretheyvalid (int a, int b, int c)
    {
        int valid_count;

        if(a>=0||a<=100){
            valid_count++;
            return a;
        }

        else
            if(a<0){
               invalid_count++;
               cout<<a<<" "<<"is too small"<<endl;
            }
            else
                if(a>100){
                   invalid_count++;
                   cout<<a<<" "<<"is too big"<<endl;
                }
        cout<<endl<<endl<<endl;

        if(b>=0||b<=100){
            valid_count++;
            return b;
        }

        else
            if(b<0){
               invalid_count++;
               cout<<b<<" "<<"is too small"<<endl;
            }
            else
               if(b>100){
                  invalid_count++;
                  cout<<b<<" "<<"is too big"<<endl;
               }
        cout<<endl<<endl<<endl;

        if(c>=0||c<=100){
            valid_count++;
            return c;
        }

        else
            if(c<0){
               invalid_count++;
               cout<<c<<" "<<"is too small"<<endl;
            }
            else
                if(c>100){
                   invalid_count++;
                   cout<<c<<" "<<"is too big"<<endl;
                }
        cout<<endl<<endl<<endl;
   }

   void aretheysame (int d, int e, int f)
   {

   }
    cout<<"the total number of groups processed are"<<" "<<total_count<<endl;
    cout<<"the number of groups valid are"<<" "<<valid_count<<endl;
    cout<<"the number of groups invalid are"<<" "<<invalid_count<<endl;
}
