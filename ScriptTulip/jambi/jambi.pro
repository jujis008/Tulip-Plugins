TEMPLATE=subdirs

include(../variables.pri)

!system(QTDIR=$$QTDIR_VAR PATH=$$JAMBI_GENERATOR_PATH:$PATH ant -DtulipDir=$$TULIP_PATH -DjambiDir=$$JAMBI_PATH) {
    error(unable to run the qtJambi Generator !)
}
