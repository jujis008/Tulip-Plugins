/*
 * utilsTest.cpp
 *
 *  Created on: 17 déc. 2008
 *      Author: chuet
 */

#include "utilsTest.h"

#include <QtScript/QScriptValue>
#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>

#include <iostream>

QScriptValue storeGraph(QScriptContext *context, QScriptEngine*)
{
	std::cout << "coucou !! " << std::endl;
	_graph = (QGraph *)(context->argument(0).toQObject());
	return QScriptValue();
}
