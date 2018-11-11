//Lionella Shmakalova
//this program is about calling on functions for working with test scores
//the program will represents 3 tests scores of students
//the programs call on a function to determine validity of the 3 test scores
//If valid, main prgm will call on other functions to classify scores in various way
//Repeat process for 20 groups of various types
//Print counters
#include <iostream>
using namespace std;

void introduction();
bool aretheyvalid(int, int, int);
void aretheysame (int, int, int );
int roundscore (int);

//this is function is called introduction
//and is a void function with no parameters
//and doesn't return anything.
//This function summarizes the purpose of program Assignment 4

int main()
{

    int score1, score2, score3;
    int total_count=0, valid_count=0, invalid_count=0;
    bool valid;
    int round;
    introduction();
    cout<< "Please type in three test scores"<<endl;
    cin>>score1 >> score2 >> score3;


    //while(score1!= -1||score2!= -1||score3!= -1)
   // {
          total_count++;
          cout<< "you typed in scores"<<endl;
          cout<<score1<<" "<<score2<<" "<<score3<<endl;



    valid= aretheyvalid(score1, score2, score3);

    if(valid== true){
        valid_count++;
        cout<<" the group is valid"<<endl;
        aretheysame(score1, score2, score3);
        round=roundscore (score1);
        round=roundscore (score2);
        round=roundscore (score3);
    }
    else{
        invalid_count++;
        cout<<" the group is invalid"<<endl;
    }

    //}







    cout<<"the total number of groups processed are"<<" "<<total_count<<endl;
    cout<<"the number of groups valid are"<<" "<<valid_count<<endl;
    cout<<"the number of groups invalid are"<<" "<<invalid_count<<endl;

    return 0;
}






void introduction(){

        cout<<"Assignment 4 is a program that computes 3 test scores of a student,";
        cout<<" main program reads in 3 integers to represent the scores and prints.";
        cout<<" main program calls on functions to explain the purpose of the program,";
        cout<<" to determine the validity of the 3 scores,";
        cout<<" if valid, compare the three scores in various ways,";
        cout<<" and rounds the integer.";
        cout<<" to end the program type in -1, -1, -1"<<endl;
}







//this is a function called aretheyvalid
//it has three parameters: int a, int b, int c
//returns a message if valid or not
//this function determines if this group is valid or not
bool aretheyvalid (int a, int b, int c)
{
    bool valid=true;



        if(a<0){
            valid= false;
            cout<<a<<" "<<"is too small"<<endl;
        }
        else
            if(a>100){
            valid= false;
            cout<<a<<" "<<"is too big"<<endl;
            }

    if(b<0){
        valid= false;
        cout<<b<<" "<<"is too small"<<endl;
        }
    else
            if(b>100){
            valid= false;
            cout<<b<<" "<<"is too big"<<endl;
            }



        if(c<0){
        valid= false;
        cout<<c<<" "<<"is too small"<<endl;
        }
        else
            if(c>100){
            valid= false;
            cout<<c<<" "<<"is too big"<<endl;
        }
    return valid;
}








void aretheysame (int d, int e, int f)
{
    if (d==e&&d==f)
        cout<<"the three numbers are the same"<<endl;
    else
        if(d==e&&f>d)
        cout<<"two are the same and the third is larger"<<endl;
        else
            if(e==f&&d>e)
            cout<<"two are the same and the third is larger"<<endl;
            else
                if(f==d&&e>f)
                cout<<"two are the same and the third is larger"<<endl;



}




int roundscore(int numb){
    if(numb<5)
        numb=0;
    if(numb>=5&&numb<=14)
        numb=10;
    if(numb>=15&&num<=24)
        numb



//    if (numb%10<5)
//        numb=numb-numb%10;
//    else
//        numb=numb-numb%10+10;
    return numb;
}
