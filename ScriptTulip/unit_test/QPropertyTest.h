#ifndef QPROPERTYTEST_H_
#define QPROPERTYTEST_H_

#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TulipScriptEngine;

class QPropertyTest : public CppUnit::TestCase
{
  CPPUNIT_TEST_SUITE(QPropertyTest);
      CPPUNIT_TEST(setNodeValueTest);
      CPPUNIT_TEST(eraseNodeTest);
  CPPUNIT_TEST_SUITE_END();
private:
	TulipScriptEngine* _engine;
public:
    void setUp();
    void tearDown();
protected:
    void setNodeValueTest();
    void eraseNodeTest();
    void handleError();
};

#endif
