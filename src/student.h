/** \brief
* @file student.h
* @author Dunya Miletic
* @date March 30 2023
* @brief this file contains all of the main information regarding the source file
* student.c such as the variable and function declaration as well as how the
* functions work and the purpose that they serve.
*/

#include <stdio.h>
/**
* A brief description of _student
*
* the function add_grade takes a Student pointer and a double value and adds the
* grade to the student list.
*
* the function average takes a Student pointer and returns the average grade of
* the student.
*
* the function print_student takes a Student pointer and prints out the student
* information with their name, id, grades and average.
*
* the function generate_random_student takes an integer grades and returns a
* Student pointer with random first and last names, a random ID and grades.
*/

typedef struct _student 
{ 
/** character array that contains student's first name*/
  char first_name[50];
/** character array that contains student's last name*/
  char last_name[50];
/** integer that contains student id*/
  char id[11];
/** double float pointer that is used to store the student's grades*/
  double *grades; 
/** integer that stores the number of grades the student has*/
  int num_grades; 
} Student;

/**
* @param Student *student, a pointer that has a given students info, grade, a double 
* float that contains the grade of a specific student
* @return does not have a return value because the function is of type void
*/
void add_grade(Student *student, double grade);

/**
* @param Student *student, a pointer that has a given students info
* @return returns a double value which represents the student's grade average
*/
double average(Student *student);

/**
* @param Student *student, a pointer that has a given students info
* @return does not return anything because the function is of type void
*/
void print_student(Student *student);

/**
* @param grades, an integer type that has a set of random grades
* @return returns a student with randomized id, first_name, last_name and grades info
*/
Student* generate_random_student(int grades); 
