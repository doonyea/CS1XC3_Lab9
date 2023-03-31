
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "time.h"
#include "course.h"

/** \brief
* @note this program represents a course management system and focuses on the
* course Math101. The functions used in the program are enroll_student(),
* generate_random_student(), print_course(), top_student() and passing() which all
* come from the course.c and student.c source files.
*
* @param Course, a structure representing a given course a student is in, Student, a
* structure represening a given student in the course
*
* @return no value is returned, however the values printed are info about the course
* including the list of enrolled students with their names and grades. The name and
* grade of the top student in the course,the total number of students passing in the
* course, the names and grades of all students passing the course.
*/


int main()
{
  srand((unsigned) time(NULL));

  Course *MATH101 = calloc(1, sizeof(Course));
  strcpy(MATH101->name, "Basics of Mathematics");
  strcpy(MATH101->code, "MATH 101");

  for (int i = 0; i < 20; i++) 
    enroll_student(MATH101, generate_random_student(8));
  
  print_course(MATH101);

  Student *student;
  student = top_student(MATH101);
  printf("\n\nTop student: \n\n");
  print_student(student);

  int total_passing;
  Student *passing_students = passing(MATH101, &total_passing);
  printf("\nTotal passing: %d\n", total_passing);
  printf("\nPassing students:\n\n");
  for (int i = 0; i < total_passing; i++) print_student(&passing_students[i]);
  
  return 0;
}
