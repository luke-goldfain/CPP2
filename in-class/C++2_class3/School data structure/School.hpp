#ifndef SCHOOL_H
#define SCHOOL_H

class School
{
public:
    Class m_class;
    Teacher m_teacher;
    Student m_student;
};

class Person
{
public:
    string m_name;
};

class Teacher : Person
{
public:
    Class m_assignedClass;
};

class Student : Person
{
public:
    Class m_assignedClass;
    GradeLevel m_gradeLevel;
    ClassGrade m_gradeInClass;
};

enum GradeLevel
{
    freshman, sophomore, junior, senior
}

enum ClassGrade
{
    A, B, C, D, F
}

#endif