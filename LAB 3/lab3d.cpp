#include <iostream>

#include <fstream>

#include <cstdlib>

#include <climits>

#include <cstring>

using namespace std;



int main()

{

    ifstream fin ("Current_Reservoir_Levels.tsv");

    if (fin.fail()){

        cerr << "File cannot be opened for reading." << endl;

        exit(1);}

    string junk; 

    getline (fin, junk);

    double eastSt, eastEl, westSt, westEl;

    bool daterange = false;

    int size = 0;

    string date;

    string Date1, Date2;

    cout << "Enter earlier date: ";

    cin >> Date1;

    cout << "Enter later date: ";

    cin >> Date2;

    string dates[365];

    double elevation[365];

    

    while (fin >>date>>eastSt>>eastEl>>westSt>>westEl){

        fin.ignore(INT_MAX, '\n');

        if (Date1 == date){

            daterange = true;}

        if (daterange == true){

            size = size + 1;

            dates[size] = date;

            elevation[size] = westEl;}

        if (Date2 == date){

            daterange = false;}

         }

    for ( int i = size; i > 0; i--){

          cout << date[i] << " " << elevation[i] << " ft" << endl;

         }

    fin.close();

    return 0;

}
