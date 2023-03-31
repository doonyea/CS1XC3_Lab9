/** \brief
* @file course.h
* @author Dunya Miletic
* @date March 30 2023
* @brief this file contains the main information regarding the course.c file and
* all of variable and function declarations as well as how they work and what their
* purpose is.
*/

#include "student.h"
#include <stdbool.h>
/**
* A brief description of _course
*
* the function enroll_student is responsible for adding a student to the course
* list of students
*
* the function print_course is reponsible for printing the infor about the course
* including its name, code and the list of students enrolled
*
* the function passing is reponsible for returning a pointer to an array of
* Students who have passed the course and settin the integer pointed to by the
* total_passing pointer to the number of students who passed the course.
*
* the function top_student is responsible for returning a pointer to the student
* with the highest score in the course.
*/


typedef struct _course 
{/** character aray that contains names of courses*/
  char name[100];
/** character array containing course codes*/
  char code[10];
/** pointer of type Student which contains info on a particular student*/
  Student *students;
/** integer representing the number of students in the course*/
  int total_students;
} Course;

/**
* @param Course *course, a pointer that contains the a given course's list of 
* students,Student *student,a pointer that contains a given student's name
* @return does not return a value because function is of type void
*/
void enroll_student(Course *course, Student *student);

/**
* @param Course *course,a pointer that contains a given course's info
* @return does not return a value because function is of type void
*/
void print_course(Course *course);

/**
* @param Course* course, a pointer that contains a given course's info
* @return returns a pointer to a Student object which has the highest grade
* achieved in the course
*/
Student *top_student(Course* course);

/**
* @param Course* course, a pointer that contains a given course's info,
* *total_passing, a pointer that contains the number of students that passed the
* course
* @return returns a pointer to an array of Student objects who have passed the course
* and returns the value of the integer pointed to by total_passing
* If no students passed the course, the function returns a null pointer
*/
Student *passing(Course* course, int *total_passing);

