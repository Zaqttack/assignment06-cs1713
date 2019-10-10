#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[]) {
    // Write code such that the input is taken from the file - “inputData.txt”
	Student bestStudent;
	double avg;
	FILE *infp;
	int N, i;
	
	infp = fopen("inputData.txt", "r");
	if (fopen == NULL) {
		printf("Cannot Open File!\n");
		exit(0);
	}
	
	fscanf(infp, "%d", &N);
	
	Student students[N];			//creating the student array struct
	
	getStudentInformation(students, infp, N);
	
    // Remainder of the program should be similar to the following – which gets average GPA and prints that + gets the best student and prints that

    avg = getAverageGPA(students, N);

    printf("Student average GPA is %lf\n", avg);
    bestStudent = getBestStudent(students,N);
    printf("Student with highest GPA is\n");
    printf("FName : %s\n", bestStudent.fName);
    printf("Age : %d\n", bestStudent.age);
    printf("GPA : %lf\n", bestStudent.gpa);
	
	fclose(infp);

    return 0;
}

