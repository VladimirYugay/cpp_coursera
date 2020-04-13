#include <iostream>
using namespace std;


struct Specialization{
  string name;
  explicit Specialization(string new_name){
    name = new_name;
  }
};

struct Course{
  string name;
  explicit Course(string new_name){
    name = new_name;
  }
};

struct Week{
  string name;
  explicit Week(string new_name){
    name = new_name;
  }
};


struct LectureTitle {
  string specialization;
  string course;
  string week;
  LectureTitle(Specialization new_spec, Course new_course, Week new_weak){
    specialization = new_spec.name;
    course = new_course.name;
    week = new_weak.name;
  }
};