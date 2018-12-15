/*
File: Concordance.h
Author: Marianna Delrio
Description: header file
Email: mariand3224@students.vvc.edu
DOC:
*/

#ifndef CONCORDANCE_H
#define CONCORDANCE_H
#include "word.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Concordance
{
public:
    Concordance(std::string filename);
    void parse();
    std::string next_word(std::ifstream &input);
    bool is_whitespace(char c);
    void eat_whitespace(std::ifstream &input);
    int find_word(std::string word);
    std::string Remove_Punctuation(std::string word);
    void print();
private:
     std::vector<Word> m_words;
     std::vector<std::string> string_of_words;
     std::string m_filename;
     int total_in_txt;
};

#endif
