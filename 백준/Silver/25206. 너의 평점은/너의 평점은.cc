#include <iostream>
#include <string>
#include <iomanip>  // For setting precision in the output

int main() {
    std::string subjectName;
    float credit, sumWeightedGrades = 0.0, sumCredits = 0.0;
    std::string grade;
    float gradePoint;

    for (int i = 0; i < 20; i++) {
        std::cin >> subjectName >> credit >> grade;

        if (grade == "A+") gradePoint = 4.5;
        else if (grade == "A0") gradePoint = 4.0;
        else if (grade == "B+") gradePoint = 3.5;
        else if (grade == "B0") gradePoint = 3.0;
        else if (grade == "C+") gradePoint = 2.5;
        else if (grade == "C0") gradePoint = 2.0;
        else if (grade == "D+") gradePoint = 1.5;
        else if (grade == "D0") gradePoint = 1.0;
        else if (grade == "F") gradePoint = 0.0;
        else if (grade == "P") continue;  // Skip processing for "P" grades

        // Calculate total weighted grades and total credits
        sumWeightedGrades += credit * gradePoint;
        sumCredits += credit;
    }

    // Calculate the GPA
    float gpa = sumWeightedGrades / sumCredits;

    // Output the result with a precision up to 6 decimal places
    std::cout << std::fixed << std::setprecision(6) << gpa << std::endl;

    return 0;
}
