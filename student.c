#include <stdio.h>
#include <string.h>
#include <stdlib.>
#include"student.h"

// Write code such that the input is taken from a file
int getStudentInformation(Student s[]) {
	FILE *infp;
	int N;
	int* arr;
	
	infp = fopen("inputData.txt", "r");
	if (fopen == NULL) {
		fopen(stderr, "No File Found!\n");
	}
	
	fscanf(infp, "%d", &N);
	
	for ( i = 0; i < N; i++) {
		fscanf(infp, "%s %d %lf", s[i].fName, s[i].age, s[i].gpa);
	}
	
	fclose(infp);
	
	return N;
}

double getAverageGPA(Student s[], int N) {
    double sum = 0;
    int i=0;

    for(i=0; i<N; i++) {
        sum += s[i].gpa;
    }
    return sum/N;
}

Student getBestStudent(Student s[], int N) {
    double maxGPA = -1;
    int i=0, idx = -1;
	
    for(i=0; i<N; i++) {
        if(s[i].gpa >= maxGPA) {
            idx = i;
            maxGPA = s[i].gpa;
        }
    }
    return s[idx];
}