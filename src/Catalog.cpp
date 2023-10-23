#include "Catalog.hpp"

void Catalog::add_book(Book book) {
    books.push_back(book);
}

size_t Catalog::get_books_count() {
    return books.size();
}

void Catalog::delete_book(int64_t index) {
    books.erase(books.begin() + index);
}
