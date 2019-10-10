#include<stdio.h>
#include<string.h>
#include"student.h"

int main(int argc, char *argv[]) {
    // Write code such that the input is taken from the file - “inputData.txt”
	Student students;
	Student bestStudent;
	double avg;
	int N;
	
	N = getStudentInformation(&students);
	
    // Remainder of the program should be similar to the following – which gets average GPA and prints that + gets the best student and prints that

    avg = getAverageGPA(&students, N);

    printf("Student average GPA is %lf\n", avg);
    bestStudent = getBestStudent(&students,N);
    printf("Student with highest GPA is\n");
    printf("FName : %s\n", bestStudent.fName);
    printf("Age : %d\n", bestStudent.age);
    printf("GPA : %lf\n", bestStudent.gpa);

    return 0;
}

