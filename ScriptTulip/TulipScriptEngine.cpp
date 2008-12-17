/*
 * TulipScriptEngine.cpp
 *
 *  Created on: 17 déc. 2008
 *      Author: rnappee
 */

#include "TulipScriptEngine.h"

TulipScriptEngine::TulipScriptEngine()
:QScriptEngine()
{

}

TulipScriptEngine::~TulipScriptEngine() {

}

void TulipScriptEngine::addScriptFunction(FunctionSignature function, QString functionName) {
	QScriptValue ctor = this->newFunction(function);
	this->globalObject().setProperty(functionName, ctor);
}
