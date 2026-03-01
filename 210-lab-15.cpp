//*****************************************************************************
// COMSC-210 | Lab 15 | Gabriel Marquez
// Description: this program exhibits a Movie class that has the screen writer,
// the year released, and the title as its private member variables.
//*****************************************************************************

#include <iostream>
#include <fstream>
#include <vector> //using STD::vector for this assignment
#include <string>
using namespace std;

class Movie {
    string title;
    int year_released;
    string screenwriter;

    public:
    //getters and setters
    string getTitle() const {return title;}
    int getYear() const {return year_released;}
    string getWriter() const {return screenwriter;}
    void setTitle(string str) {this->title = str;}
    void setYear(int year) {this->year_released = year;}
    void setWriter(string str) {this->screenwriter = str;}
    //member print() method
    void print() const { //should be const since it's a getter?
        cout << "Movie: " << title << endl;
        cout << "\tYear released: " << year_released << endl;
        cout << "\tScreenwriter: " << screenwriter << endl;
        cout << endl;
    }
};

int main() {
    //create empty vector of Movie objects
    vector<Movie> movies;

    //read data from file
    ifstream fin("input.txt");
    if (fin.good( )) {
        string title, writer;
        int year;

        while (getline(fin, title)) {
            fin >> year;
            fin >> writer;
            fin.ignore();
            
            //create temp Movie object and populate
            Movie temp;
            temp.setTitle(title);
            temp.setYear(year);
            temp.setWriter(writer);
            //push temp Movie object into movies vector
            movies.push_back(temp);
        }
        cout << movies.size(); //testing to see if the above worked
        fin.close( );
    }
    else {
        cout << "ERROR! Please verify file name/directory and restart program.";
        return 1;
    }
    //output movies using Movie object's print() method

    return 0;
}