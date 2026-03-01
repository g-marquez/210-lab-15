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
    void print() {
        cout << "Movie: " << title << endl;
        cout << "\tYear released: " << year_released << endl;
        cout << "\tScreenwriter: " << screenwriter << endl;
        cout << endl;
    }

};

int main() {


    return 0;
}