#include <iostream>
#include <stdexcept>
#include "csci152_student.h"

	std::string name; // name of student

	unsigned int *assignment_scores; /// let's assume we will have and array of size 4, 
									 /// each score out of 100
	unsigned int num_of_quizzes;   	 // between 2 and 7, depends on students' spravkas
	unsigned int *quiz_scores;	     /// array of size num_of_quizzes, each out of 15
	unsigned int final_exam_score;   /// out of 100

//public:

	/*
	 * Standard argument constructor -- you must copy the arrays!
	 *
	 * Do not worry about illegal inputs for this assignment - you do not need
	 * to throw an exception, or even try to handle them
	 */
	 
	csci152_student::csci152_student(
			std::string nm,
			unsigned int *asmts,
			unsigned int num_qs,
			unsigned int *quizzes,
			unsigned int final_exam
	){
		
			name = nm;
			*assignment_scores = *asmts;
			num_of_quizzes = num_qs;
			*quiz_scores = *quizzes;
			final_exam_score = final_exam;
	}

	/*
	 * Copy constructor
	 */
	csci152_student::csci152_student(const csci152_student& other){
			name = other.name;
			assignment_scores = other.assignment_scores;
			num_of_quizzes = other.num_of_quizzes;
			quiz_scores = *other.quiz_scores;
			final_exam_score = other.final_exam_score;
	}

	/*
	 * Copy assignment - be careful to properly dispose of allocated memory for this
	 * before overwriting with values from other
	 */
	csci152_student::csci152_student& operator=(const csci152_student& other){
			name = other.name;
			assignment_scores = other.assignment_scores;
			num_of_quizzes = other.num_of_quizzes;
			quiz_scores = *other.quiz_scores;
			final_exam_score = other.final_exam_score;
			return *this;
	}


	/*
	 * Name getter
	 */
	std::string get_name() const{
	return name;
	}

	/*
	 * Calculates the average assignment score, between 0.0 and 100.0
	 */
	double csci152_student::calculate_assignment_perc() const{
		size_t a = 0;
		for(int i = 1; i<= 4; i++){
			a = a + assignment_scores[i];
		}
		int b = a/4;
		return b;
	}

	/*
	 * Calculates the total quiz percentage, where the lowest score is dropped from
	 * from the calculation.  Between 0.0 and 100.0
	 */
	double csci152_student::calculate_quiz_perc() const{
		size_t a = 0;
		size_t min = 100, b;
		for(int i = 1; i<= 6; i++){
			if(min>quiz_scores[i]){
				b = i;
			}
		}
				for(int i = 1; i<= 6; i++){
			if(i == b){
				i++;
			}
		}
			a = a + quiz_scores[i];
		return a;
	}


	/*
	 * Returns the value stored in final_exam_score
	 */
	unsigned int csci152_student::get_final_exam_perc() const{
	return final_exam_score;
	}

	/*
	 * Calculates the total course grade as a percent, using the weighting from
	 * the syllabus
	 */
	double csci152_student::calculate_course_perc() const{
		size_t a = calculate_assignment_perc()*0.2 + get_final_exam_perc()*0.4+calculate_quiz_perc()*0.4;
		}

	/*
	 * Destructor - don't forget you need to delete anything you explicitly allocated
	 */
	~csci152_student::csci152_student(){};
