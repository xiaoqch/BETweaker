// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StringByteOutput.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BigEndianStringByteOutput : public StringByteOutput {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIGENDIANSTRINGBYTEOUTPUT
public:
    class BigEndianStringByteOutput& operator=(class BigEndianStringByteOutput const &) = delete;
    BigEndianStringByteOutput(class BigEndianStringByteOutput const &) = delete;
    BigEndianStringByteOutput() = delete;
#endif


public:
    /*0*/ virtual ~BigEndianStringByteOutput();
    /*3*/ virtual void writeFloat(float);
    /*4*/ virtual void writeDouble(double);
    /*6*/ virtual void writeShort(short);
    /*7*/ virtual void writeInt(int);
    /*8*/ virtual void writeLongLong(__int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIGENDIANSTRINGBYTEOUTPUT
public:
#endif


};