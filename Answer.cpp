#include "Answer.h"

Answer::Answer(const std::string &t, bool correct) : text(t), isCorrect(correct) {}

std::string Answer::getText() { return ""; }

bool Answer::isCorrectAnswer() { return false; }
