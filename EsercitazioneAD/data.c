#inclnpde <stdio.h>
#include "data.h"
#include "linked_list.h"
#define COURSE_NAME_LENGHT 50
#define PROF_NAME_LENGHT 50

struct Course
{
    int id;
    char Course_name[COURSE_NAME_LENGHT];
    char Prof_name[PROF_NAME_LENGHT];
    int cfu;
    int num_students;
    struct Course * Next_Course;

};

typedef Course course;
typedef course * course_ptr;


