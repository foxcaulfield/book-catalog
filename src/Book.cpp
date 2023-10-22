#include "Book.hpp"

Book::Book(std::string title) {
    this->title = title;
}

std::string Book::get_title() {
    return title;
}
