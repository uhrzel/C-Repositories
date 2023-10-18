#include <iostream>
using namespace std;

void getMonthDayYear(int month, int day, int year){
    switch(month) {
        case 1:
        cout<<"Month: "<<" January"<<endl;
        break;
        case 2:
        cout<<"Month: "<<"February"<<endl;
        break;
        case 3:
        cout<<"Month: "<<"March"<<endl;
        break;
         case 4:
        cout<<"Month: "<<"April"<<endl;
        break;
        case 5:
        cout<<"Month: "<<"May"<<endl;
        break;
        case 6:
        cout<<"Month: "<<"June"<<endl;
        break;
         case 7:
        cout<<"Month: "<<"July"<<endl;
        break;
        case 8:
        cout<<"Month: "<<"August<<endl";
        break;
        case 9:
        cout<<"Month: "<<"September<<endl";
        break;
         case 10:
        cout<<"Month: "<<"October<<endl";
        break;
        case 11:
        cout<<"Month: "<<"November"<<endl;
        break;
        case 12:
        cout<<"Month: "<<"December"<<endl;
        break;
        default:
        cout<<"Invalid Month"<<endl;

    }
    if(day > 0 && day < 31){
        cout<<"DAY: "<<day<<endl;
    }
    else{
        cout<<"The day is invalid"<<endl;
    }
    
    if(year > 1900 && year < 2023){
        cout<<"YEAR: "<<endl;
    }
    else{
        cout<<"The year is invalid"<<endl;
    }
}



int main(){
    int day, year, month;

    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter day: ";
    cin>>day;
    cout<<"Enter year: ";
    cin>>year;

    getMonthDayYear(month,day,year);
}