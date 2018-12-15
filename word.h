/*
File: word.h
Auhtor: marianna delrio
Description: header for word
Email: mariand3224@students.vvc.edu
DOC:
*/




#ifndef WORD_H
#define WORD_H
#include<vector>
#include<string>

class Word
{
public:
   Word(std::string  word);
   void add_line(int line);
   void add_count(int count);
    std::string get_word();
   void print() const;
private:
   int m_count;
   std::string m_word;
   std::vector<int> m_line;
};

#endif

