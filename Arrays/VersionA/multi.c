#include <stdio.h>

int studentMarks[30][3]; // 30 students, 3 records per student

int main(){
	//student 0
	studentMarks[0][0] = 1566; 	// id
	studentMarks[0][1] = 89;	//English marks
	studentMarks[0][2] = 15;	//Maths marks
	//student 1
	studentMarks[1][0] = 4615;
	studentMarks[1][1] = 69;
	studentMarks[1][2] = 55;
	//student 2
	studentMarks[2][0] = 5266;
	studentMarks[2][1] = 65;
	studentMarks[2][2] = 55;
	
	int studentIndex, marksIndex;
	for(studentIndex = 0; studentIndex < 3; studentIndex++){
	// outer loop for students
		for(marksIndex = 0; marksIndex < 3; marksIndex++){
			//inner loop for marks
			printf("%i\t", studentMarks[studentIndex][marksIndex]);
		}
		printf("\n");
	}
	//+ student with lowest maths marks
	//+ average of English marks

}
