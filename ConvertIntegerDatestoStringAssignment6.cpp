//Lionella Shmakalova
//Assignment 6
//Main calls to function to read in
//a string called date
//Main calls other functions
//to process string date
//Main repeats for several
//string dates
#include <iostream>
#include <string>
 void readoriginaldate (string&);
 void breakoriginaldate (string, string&, string&, string&);
 string printdate3ways (string&, string, string);
int main()
{

    string date, month, day, year;
    string european_way, american_way, full_way;


    readoriginaldate(date);
    breakoriginaldate (date, month&, day&, year&);
    printdate3ways (string, string, string);
int main()



void readoriginaldate (string &date)
{
  for(count=0; count < 10; count++)
  {
      cin>> date;
      cout<<date;
  }
  return;
}

void breakoriginaldate ( string date, string &month, string &day, string &year)
    {
    cout<< " the original date is: " << date << endl;
    month = date.find("/",0);
    cout<< "the month is: " << month <<endl;
    date.erase("/",0);
    day = date.find("/",0);
    cout<< "the day is: " << day <<endl;
    date.erase("/",0);
    year = date;
    cout<< "the year is: " <<year <<endl;

    return;
    }






}
