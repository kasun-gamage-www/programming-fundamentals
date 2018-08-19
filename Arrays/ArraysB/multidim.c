#include <stdio.h>

int main(){
	/*
	int student1Marks[4];
	int student2Marks[4];
	int student3Marks[4];
	
	int studentIDs[30];
	int mathsMarks[30];
	int scienceMarks[30];
	int englishtMarks[30];
	*/
	int studentMarks[30][4];
	
	//0th student
	studentMarks[0][0] = 7894;
	studentMarks[0][1] = 78;
	studentMarks[0][2] = 45;
	studentMarks[0][3] = 95;
	
	//1st student
	studentMarks[1][0] = 1564;
	studentMarks[1][1] = 50;
	studentMarks[1][2] = 18;
	studentMarks[1][3] = 16;
	
	//2nd student
	studentMarks[2][0] = 4875;
	studentMarks[2][1] = 81;
	studentMarks[2][2] = 69;
	studentMarks[2][3] = 14;
	
	int stdI, mrkI;
	for(stdI = 0; stdI < 30; stdI++){
		//outer loop : 1 iteration == 1 student
		printf("\nstudent %i \n", stdI);
		for(mrkI = 0; mrkI < 4; mrkI++){
			//inner loop : 1 iteration == 1 record of a student
			printf("\t%i\n", studentMarks[stdI][mrkI]);
		}
	} 
	
	//calculate average science marks
	//student with highest english marks
	
}
