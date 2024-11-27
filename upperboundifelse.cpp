/*
Sometimes comparing the lower bounds and upper bounds with logical operator may 
lead to several redundant comparisions, so We can refactor the code, we can remove 
the lower bounds and check only the upper bounds for each grade as the code flow is such that we move along the conditions only after satisfying the previous one.

*/


#include <iostream>

int main() {
    int marks = 54;
    char grade;

    if (marks < 25) {
        grade = 'F';
    } else if (marks <= 44) {
        grade = 'E';
    } else if (marks <= 49) {
        grade = 'D';
    } else if (marks <= 59) {
        grade = 'C';
    } else if (marks <= 69) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'A';
    } else {
        grade = 'X'; // Use 'X' to indicate invalid marks
    }

    std::cout << "Grade: " << grade << std::endl;
    
    return 0;
}
