/*
Program: Grade Tracker
Purpose: Read 3 grades, validate input, compute average, print letter grade.
Inputs: 3 numeric grades from 0 to 100
Outputs: average and letter grade
*/

#include <iostream>
bool input_validation(int x);
int grade_average(int x, int y, int z);
char letter_grade(int x);

int main(){
    int grade1, grade2, grade3;
    int answer;
    while(true){
        std::cout << "Would you like to calculate grades? (Anything for Yes, 0 for No)\n";
        std::cin >> answer;
        if (answer == 0)
            break;
        std::cout << "Enter test grade 1 out from 0 to 100.\n";
        std::cin >> grade1;
        while(input_validation(grade1) == false){
            std::cout << "Please enter a valid test grade from 0 to 100\n";
            std::cin >> grade1;
        }
        std::cout << "Enter test grade 2 out from 0 to 100.\n";
        std::cin >> grade2;
        while(input_validation(grade2) == false){
            std::cout << "Please enter a valid test grade from 0 to 100.\n";
            std::cin >> grade2;
        }
        std::cout << "Enter test grade 3 out from 0 to 100.\n";
        std::cin >> grade3;
        while(input_validation(grade3) == false){
            std::cout << "Please enter a valid test grade from 0 to 100.\n";
            std::cin >> grade3;
        }
        int average_grade = grade_average(grade1, grade2, grade3);
        std::cout << "Your average grade is a " << average_grade << ".\n";
        std::cout << "Your letter grade is a " << letter_grade(average_grade) << ".\n";
        }

            

    }

bool input_validation(int x){
    if (x >= 0  and x <= 100)
        return true;
    else 
        return false;
}

int grade_average(int x, int y, int z){
    return (x+y+z)/3;
}

char letter_grade(int x){
    if (x > 89)
        return 'A';
    else if (x > 79)
        return 'B';
    else if (x > 69)
        return 'C';
    else if (x > 59)
        return 'D';
    else 
        return 'F';
    
}