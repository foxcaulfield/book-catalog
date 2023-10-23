#include "Book.hpp"
#include "Catalog.hpp"
#include "globals.hpp"
#include "greet.hpp"

Book create_book();

// void menu();

int main() {
    greet();

    Catalog main_catalog;

    for (;;) {
        std::cout << "Main menu:" << std::endl;
        std::cout << "  1 - Create book" << std::endl;
        std::cout << "  2 - Print catalog size" << std::endl;
        std::cout << "  3 - Print book titles" << std::endl;
        std::cout << "  0 - Exit" << std::endl;

        std::string choice;
        std::getline(std::cin, choice);

        if (choice == "1") {
            Book book = create_book();
            main_catalog.add_book(book);
            std::cout << "Done!" << std::endl;
        } else if (choice == "2") {
            size_t catalog_size = main_catalog.get_books_count();
            std::cout << "Catalog size is: " << catalog_size << std::endl;
        } else if (choice == "3") {
            for (std::vector<Book>::iterator book_iterator =
                     main_catalog.books.begin();
                 book_iterator < main_catalog.books.end(); ++book_iterator) {
                std::ptrdiff_t diff =
                    std::distance(main_catalog.books.begin(), book_iterator);

                std::cout << "(" << diff << ") " << book_iterator->get_title() << std::endl;
            }
            // std::cout << "Catalog size is: " << catalog_size << std::endl;
        } else if (choice == "0") {
            break;
        } else {
            std::cout << "Unknown command" << std::endl;
        }
    }

    return 0;
}

Book create_book() {
    std::string title;

    std::cout << "Enter a book title: " << std::endl;

    std::getline(std::cin, title);

    Book book(title);

    return book;
}