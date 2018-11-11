//Lionella Shmakalova
//main program calls to three functions
//main calls to function to compute average of three parameters
//main calls to function to compare parameters to average
//main calls to a function to print name and purpose for assignment3
#include <iostream>
#include <iomanip>
using namespace std;

void introduction();
double findaverage(int , int , int );
double comparetoavg (int, int, int );
int main ()
 {
     int number1,number2,number3,counter=0;
     double avg;
     introduction();
     cout<<showpoint<<setprecision(4);
     cout<<"Please type in 3 integer values,"<<
           "type in -1, -1, -1 to end"<<endl;
     cin>> number1 >> number2 >> number3;
     while (number1!=-1||number2!=-1||number3!=-1){
        counter++;
     cout<<"you printed numbers "<<number1 <<"  "<<
            number2 <<"  "<< number3 <<endl;
     avg= findaverage(number1, number2,number3);
     cout<<"The average is "<<avg<<endl;
     comparetoavg(number1,number2,number3);
     cout<<endl<<endl<<endl;
     cout<<"Please type in 3 integer values,"<<
           "type in -1, -1, -1 to end"<<endl;
     cin>> number1 >> number2 >> number3;
     }
    cout<<"the number of total data values is " <<counter<<endl;


}

void introduction(){
  cout<<" Lionella Shmakalova"<<endl;
  cout<<" This program prints my name"<<endl;
  cout<<" The main program reads in three integer values"<<endl;
  cout<<" The program will end the set of data when the user"<<
        "types in -1 -1 -1  "<<endl;
}

double findaverage(int a, int b, int c)
{

    double average= (a+b+c)/3.0;

    return average;
}

double comparetoavg (int c, int d, int e)
   { int count=0;
    double avg=(c+d+e)/3.0;
    if (avg == c)
    {
        cout<<" average is equal to "<< c <<endl;
        count++;
    }
       else
         if (avg < c)
         cout<<" average is less than "<< c <<endl;
       else
         if (avg > c)
         cout<<" average is greater than "<< c <<endl;
    if (avg == d)
    {
        cout<<" average is equal to "<< d <<endl;
        count ++;
    }
       else
         if (avg < d)
         cout<<" average is less than "<< d <<endl;

       else
         if (avg > d)
         cout<<" average is greater than "<< d <<endl;

    if (avg == e)
    {
       cout<<" average is equal to "<< e <<endl;
       count ++;
    }
       else
         if (avg < e)
       cout<<" average is less than "<< e <<endl;
       else
         if (avg > e)
        cout<<" average is greater than "<< e <<endl;

    cout<<" The amount of numbers equal to average is "<< count <<endl;

    }



