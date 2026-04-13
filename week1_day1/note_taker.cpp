/*Note Taker App
Use terminal to read and write 1 line to a Note.txt file
Use Functions to distribute responisbility.*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void read_note();
void write_note();

int main(){
    while(true){
        std::cout << "Would you like to view or write notes? (Use 1 for view, 2 for write, and 3 to close.)";
        int answer;
        std::cin >> answer;
        if (answer < 4 and answer > 0){
            if (answer == 3)
                break;
            else if (answer == 1){
                read_note();
                answer = 0;
            }
            else if (answer == 2)
                write_note();
                answer = 0;
        }
        else 
            answer = 0;
    }
}

void read_note(){
    std::ifstream file("note.txt");
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::cout << line << "\n";
        }
    }
    file.close();
}

void write_note(){
    std::ofstream file("note.txt", std::ios::app);
    std::cout << "What would you like to write.";
    std::cin.ignore();
    std::string line;
    std::getline(std::cin, line);
    file << line << "\n";
    file.close();
}
