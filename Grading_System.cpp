
 #include <iostream>
using namespace std;

int main() {
    float marks[5], creditHours[5], gradePoints[5];
    string grades[5];
    float totalMarks = 0, totalGradePoints = 0, totalCredits = 0;


    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for Course " << i + 1 << " (out of 100): ";
        cin >> marks[i];

        cout << "Enter credit hours for Course " << i + 1 << ": ";
        cin >> creditHours[i];


        if (marks[i] >= 90) { grades[i] = "A+"; gradePoints[i] = 4.00; }
        else if (marks[i] >= 85) { grades[i] = "A"; gradePoints[i] = 3.75; }
        else if (marks[i] >= 80) { grades[i] = "A-"; gradePoints[i] = 3.50; }
        else if (marks[i] >= 75) { grades[i] = "B+"; gradePoints[i] = 3.25; }
        else if (marks[i] >= 70) { grades[i] = "B"; gradePoints[i] = 3.00; }
        else if (marks[i] >= 65) { grades[i] = "B-"; gradePoints[i] = 2.75; }
        else if (marks[i] >= 60) { grades[i] = "C+"; gradePoints[i] = 2.50; }
        else if (marks[i] >= 55) { grades[i] = "C"; gradePoints[i] = 2.25; }
        else if (marks[i] >= 50) { grades[i] = "C-"; gradePoints[i] = 2.00; }
        else if (marks[i] >= 45) { grades[i] = "D"; gradePoints[i] = 1.75; }
        else { grades[i] = "F"; gradePoints[i] = 0.00; }


        totalMarks += marks[i];
        totalGradePoints += gradePoints[i] * creditHours[i];
        totalCredits += creditHours[i];
    }

    float SGPA = totalGradePoints / totalCredits;
    for (int i = 0; i < 5; i++) {
        cout << "  " << i + 1 << marks[i] << "  " << grades[i] << "  " << gradePoints[i] << endl;
    }

    cout << "Total Marks: " << totalMarks << endl;
    cout << "SGPA: "  << SGPA << endl;

    return 0;
}
