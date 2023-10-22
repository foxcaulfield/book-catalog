#ifndef BOOK_H
#define BOOK_H

#include "globals.hpp"

class Book {
   private:
    std::string title;
   public:
    Book(std::string title);
	std::string get_title();
};

#endif