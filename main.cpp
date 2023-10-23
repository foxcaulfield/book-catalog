#include "Book.hpp"
#include "Catalog.hpp"
#include "globals.hpp"
#include "greet.hpp"

Book create_book();

int main() {
    greet();

    Catalog main_catalog;

    Book book = create_book();

    main_catalog.add_book(book);
    
    size_t catalog_size =  main_catalog.get_books_count();

    std::cout << catalog_size << std::endl;

    return 0;
}

Book create_book() {
    std::string title;

    std::cout << "Enter a book title: " << std::endl;

    std::getline(std::cin, title);

    Book book(title);

    return book;
}