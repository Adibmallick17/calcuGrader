#include <stdio.h>

int main () {

    float totalGradeStudents;
    int numStudents = 0;
    float average;
    float lab1, lab2, lab3, lab4, lab5;
    char continueLoop = 'y';
    printf("Welcome to ALT 1300 admin page \n\n");
    while(continueLoop == 'y') {
        numStudents++;
        printf("Student #%d:\n\n",numStudents);
        printf("Enter 5 lab marks, each separated by a space: ");
        scanf("%f %f %f %f %f", &lab1, &lab2, &lab3, &lab4, &lab5);
        average = (lab1+lab2+lab3+lab4+lab5)/25.0;
        printf("Overall lab grade (20) =  %.2f/20 \n\n", average);


    float a1, a2, a3;
    int moss1, moss2, moss3;
    float assignmentAvg;
    printf("Enter 3 assignment marks, each separated by a space: ");
    scanf("%f %f %f", &a1, &a2, &a3);
    printf("Enter MOSS result for A1:");
    scanf("%d", &moss1);
    printf("Enter MOSS result for A2:");
    scanf("%d", &moss2);
    printf("Enter MOSS result for A3:");
    scanf("%d", &moss3);
    assignmentAvg = (((a1*moss1)/(100/5.0))+((a2*moss2)/(100/7.0))+((a3*moss3)/(100/8.0)));
    printf("Overall assignment grade (20) = %.2f/20 \n\n", assignmentAvg);

    float quizAvg;
    float quiz1, quiz2, quiz3, quiz4;
    printf("Enter 4 quiz marks, each separated by a space: ");
    scanf("%f %f %f %f", &quiz1, &quiz2, &quiz3, &quiz4);
    quizAvg = (quiz1+quiz2+quiz3+quiz4)/20;
    printf("Overall quiz grade (20) =  %.2f/20 \n\n", quizAvg);

    float labMarks;
    char surveyResponse;
    float labWorth;
    float examWorth;
    int examGrade;
    printf("Enter lab exam mark: ");
    scanf("%f", &labMarks);
    printf("Enter the survey response ('y' or 'n'): ");
    scanf(" %c", &surveyResponse);
    if (surveyResponse == 'n'){
       labWorth = 0.10;
       examWorth = 0.30;
       examGrade = 30;
       printf("Your lab exam is worth 10, and final exam is worth 30\n\n");
    } else {
        labWorth = 0;
        examWorth = 0.40;
        examGrade = 40;
        printf("Your lab exam is worth 0, and final exam is worth 40\n\n");
    }
    labMarks = (labMarks*labWorth);
    
    float examMark;
    float finalExamMarks;
    printf("Enter final exam mark: ");
    scanf("%f", &examMark);
    finalExamMarks = (examMark*examWorth);
    printf("Overall final exam grade (%d) =  %.2f/%d \n\n", examGrade, finalExamMarks,examGrade);
    if (quizAvg + finalExamMarks <25){

        printf("Quizzes + Final Exam = %.2f + %.2f = %.2f (<25)\n\n", quizAvg, finalExamMarks,quizAvg+finalExamMarks);
    }else {
        printf("Quizzes + Final Exam = %.2f + %.2f = %.2f (>=25)\n\n", quizAvg, finalExamMarks,quizAvg+finalExamMarks);
    }

     float finalGrade;
    printf("Overall course marks(%%)\n");
    printf("*************************\n");
    printf("Labs = %.2f \n", average);
    printf("Assignments = %.2f \n", assignmentAvg);
    printf("Quizzes = %.2f \n", quizAvg);
    if (labMarks != 0) {
       printf("Lab Exam = %.2f \n", labMarks);
    }
    
    printf("Final Exam = %.2f \n",finalExamMarks);
    printf("*************************\n\n");
    finalGrade = (average+assignmentAvg+quizAvg+finalExamMarks+labMarks);
    printf("Your overall course grade = %.2f%%\n",finalGrade);
    printf("Overall grade = ");
    if (finalGrade < 50) {
    printf("F\n");
    } else if (finalGrade < 53) {
    printf("D-\n");
    } else if (finalGrade < 57) {
    printf("D\n");
    } else if (finalGrade < 60) {
    printf("D+\n");
    } else if (finalGrade < 63) {
    printf("C-\n");
    } else if (finalGrade < 67) {
    printf("C\n");
    } else if (finalGrade < 70) {
    printf("C+\n");
    } else if (finalGrade < 73) {
    printf("B-\n");
    } else if (finalGrade < 77) {
    printf("B\n");
    } else if (finalGrade < 80) {
    printf("B+\n");
    } else if (finalGrade < 85) {
    printf("A-\n");
    } else if (finalGrade < 90) {
    printf("A\n");
    } else if (finalGrade <= 100) {
    printf("A+\n");
    }
    
    totalGradeStudents += finalGrade;
    printf("Would you like to continue - enter y for yes, n for no: ");
    scanf(" %c", &continueLoop);
    printf("\n");
    }
    printf("Average course mark of %d students = %.2f%% \n", numStudents, totalGradeStudents/numStudents);

    return 0;
    }





                                                                                                                     
