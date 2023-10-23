#ifndef CATALOG_H
#define CATALOG_H

#include "Book.hpp"
#include "globals.hpp"

class Catalog {
   private:
   public:
    std::vector<Book> books;
    void add_book(Book book);
    size_t get_books_count();
};

#endif
