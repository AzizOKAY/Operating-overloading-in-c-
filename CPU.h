/*
 * File:   CPU.h
 * Author: Aziz OKAY
 * Created on 29 Ekim 2016 Çarşamba, 00:27
 */

#ifndef CPU_H
#define CPU_H

#include <iostream>
#include "Memory.h"
using namespace std;

class CPU {
public:
    /*** CONSTRUCTORS ***/
    CPU();
    CPU(int op);
    CPU(string inst);

    /***** Getter function *****/
    int getPC() const;
    int getOption() const;
    string getInstruction() const;
    int getNthRegister(int nth) const;

    /***** Setter function *****/
    void setPC(const int newPC);
    void setOption(const int newOp);
    void setInstruction(const string newString);
    void setNthRegister(const int newR1, const int nth);

    void print() const;
    bool halted() const;
    void gtuToLower(string &line);
    int execute(string line, Memory &memObj);

private:
    int PC;
    int option;
    int regArr[5];
    string instruction;

    int gtuAtoi(const char *str) const;
    bool isNumber(const char isNum) const;
    bool isEndOfLine(const char isEnd) const;

    int jmpInstruction(const string line);
    int jpnInstruction(const string line);
    int addInstruction(const string line, Memory &memObj);
    int subInstruction(const string line, Memory &memObj);
    int movInstruction(const string line, Memory &memObj);
    void dropAllSpace(string line, string &newLine);
    int prnInstruction(const string line, Memory &memObj);
    int movToReg(const string line, int regNum, Memory &memObj);
    int movToMem(const string line, int memNum, Memory &memObj);

};

#endif /* CPU_H */
