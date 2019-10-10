#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student_struct {
    char fName[10];
    int age;
    double gpa;
} Student;

// Write code such that the input is taken from a file

int getStudentInformation(Student*);
double getAverageGPA(Student[], int);
Student getBestStudent(Student[], int);

#endif

