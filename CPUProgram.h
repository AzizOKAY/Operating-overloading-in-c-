/*
 * File:   CPUProgram.h
 * Author: Aziz OKAY
 *
 */

#ifndef CPUPROGRAM_H
#define CPUPROGRAM_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class CPUProgram {

    friend ostream& operator<<(ostream& out, const CPUProgram& obj);
    friend CPUProgram operator +(const CPUProgram obj, const char* _instr);
    friend bool operator<(const CPUProgram& left, const CPUProgram& right);
    friend bool operator>(const CPUProgram& left, const CPUProgram& right);
    friend bool operator==(const CPUProgram& left, const CPUProgram& right);
    friend bool operator!=(const CPUProgram& left, const CPUProgram& right);
    friend bool operator<=(const CPUProgram& left, const CPUProgram& right);
    friend bool operator>=(const CPUProgram& left, const CPUProgram& right);
    friend CPUProgram operator +(const CPUProgram first, const CPUProgram second);



    public:
        CPUProgram(){option = 0;};
        CPUProgram(const int opt);
        CPUProgram(char *fileName);


        int size() const;
        vector<string> getAllLine() const;
        int ReadFile(const char *fileName);
        string getLine(const int lineNum) const;
        int getOption() const { return option; }
        void setAllLine(const vector<string> all);
        void setOption(const int opt) { option = opt;}
        void setLine(const string _instr) {allLine.push_back(_instr);}

        /*** OPERATOR OVERLOADIG ***/
        string operator[](const int index);
        CPUProgram operator ()(int index1, int index2);
        CPUProgram& operator --();
        CPUProgram operator --(int);
        CPUProgram& operator +=(const string _instr);

    private:
        int option;
        vector<string> allLine;
};

#endif /* CPUPROGRAM_H */
