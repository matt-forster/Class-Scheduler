#include "Course.h"
#include "CourseCont.h"
#include "coursecont_testfixture.h"
#include "Exceptions.h"


void CourseContFixture::setUp(){
	cc = new CourseCont();
}

void CourseContFixture::tearDown(){
	delete cc;
}

void CourseContFixture::testAddCourse(){
	Course c(900, 1015, "MW", "name", "loc 640", 9484739);
	CPPUNIT_ASSERT_NO_THROW(cc->addCourse(c));
	CPPUNIT_ASSERT(cc->first().getStartTime() == c.getStartTime());
	CPPUNIT_ASSERT(cc->first().getEndTime() == c.getEndTime());
	CPPUNIT_ASSERT(cc->first().getStartTime() == c.getStartTime());
	CPPUNIT_ASSERT(cc->first().getDays() == c.getDays());
	CPPUNIT_ASSERT(cc->first().getName() == c.getName());
	CPPUNIT_ASSERT(cc->first().getLoc() == c.getLoc());
	CPPUNIT_ASSERT(cc->first().getId() == c.getId());
}

void CourseContFixture::testReturnLast(){
	Course c1(900, 1015, "MW", "name", "loc 640", 9484739);
	Course c2(1030, 1200, "MW", "name2", "loc 641", 453224);
	CPPUNIT_ASSERT_NO_THROW(cc->addCourse(c1));
	CPPUNIT_ASSERT_NO_THROW(cc->addCourse(c2));
	CPPUNIT_ASSERT(cc->last().getStartTime() == c2.getStartTime());
	CPPUNIT_ASSERT(cc->last().getEndTime() == c2.getEndTime());
	CPPUNIT_ASSERT(cc->last().getStartTime() == c2.getStartTime());
	CPPUNIT_ASSERT(cc->last().getDays() == c2.getDays());
	CPPUNIT_ASSERT(cc->last().getName() == c2.getName());
	CPPUNIT_ASSERT(cc->last().getLoc() == c2.getLoc());
	CPPUNIT_ASSERT(cc->last().getId() == c2.getId());
}