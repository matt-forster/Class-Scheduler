#include "CourseBase.h"
#include <string>
using namespace std;

CourseBase::CourseBase(unsigned int _startTime, unsigned int _endTime, string _days, string _courseName, string _courseLoc, unsigned int _courseId){
	startTime = _startTime;
	endTime = _endTime;
	days = _days;
	courseName = _courseName;
	courseLoc = _courseLoc;
	courseId = _courseId;
}

unsigned int CourseBase::getEndTime() const{
	return endTime;
}

unsigned int CourseBase::getStartTime() const{
	return startTime;
}

string CourseBase::getDays() const{
	return days;
}

string CourseBase::getName() const{
	return courseName;
}

string CourseBase::getLoc() const{
	return courseLoc;
}

unsigned int CourseBase::getId() const{
	return courseId;
}

void CourseBase::setRating(unsigned int _rating){
	rating = _rating;
}

unsigned int CourseBase::getRating() const{
	return rating;
}