//Lionella Shmakalova
//Assignment 5: Student scores on three exams
//Main pgm reads data from data file of parameter value n
//Main pgm calls function read3arrays to read in 3 exams
//Main pgm calls function print1array: send exam1 and k
//Main pgm prints heading, explain print1array print job
//and main pgm calls the same function for arrays: exam2, exam3
//Main pgm calls function makeweightedavg
//Main pgm will call function print1array
//to print values in weightedavg array
//Main pgm calls function findsmallestandpos:
//returns smallest element and postion in array
#include <iostream>
using namespace std;
void read3arrays (int[], int[], int[], int);
void print1array (int[], int);
double makeweightedavg (int[], int[], int[], int, double[]);
int findsmallestandpos (int[], int, int&, int&);
const int MAXSIZE = 30;
int main()
{
    int n, smallest, position;
    int first_score[MAXSIZE], second_score[MAXSIZE], third_score[MAXSIZE];
    double weightedavg[];
    int smallarray[];

    cout<<"Please enter the number of scores"<<endl;
    cin>>n;


    read3arrays(first_score, second_score, third_score, n);
    cout <<"function print1array prints each score for each student one at a time and it's size"<<endl;
    cout<<" these are the scores for the first exams"<<endl;
    print1array (first_score, n);
    cout<<" these are the scores for the second" <<endl;
    print1array (second_score, n);
    cout<<" these are the scores for the third" <<endl;
    print1array (third_score, n);
    makeweightedavg (first_score second_score, third_score, n, weightedavg);
    print1array (weightedavg, n);
    findsmallestandpos (smallarray[], n, smallest, position);







}
void read3arrays(int first_score[], int second_score[], int third_score[], int k)
    {
        for(int count = 0; count < k; count++)
        {
            cout<<" type in three grades for each student" <<endl;
            cin>> first_score[stnum];
            cout<<" the first is:"<< first_score[stnum] <<endl;
            cin>> second_score[stnum];
            cout<<" the second is:"<< second_score[stnum] <<endl;
            cin>> third_score[stnum];
            cout<<" the third is:"<< third_score[stnum] <<endl;
        }
        return;
    }




void print1array (int nums[], int k)
    {
        for(int count=0; count<k; count++)
        {
            cout<<nums[count]<<"   ";
            if(count%6==0)
                cout<<endl;

        }
        return;
    }



void makeweightedavg ( int score1[] int score2[], int score3[], int k, double averages[])
{
    int sum=0;
    for(int count=0; count<k; count++)
    {
        sum=((1*score1[count])+(2*score2[count])+(3*score3[count]));
        averages[count] = double(sum) / 6;
    }
    return;
}


findsmallestandpos (int num[], int k, int small&, int pos&)
{
    smallestsofar = num[0];
    for (int count = 0; count<k; count++)
            if(numb[j]< smallestsofar)
                smallestsofar= num[count];
return;
}










