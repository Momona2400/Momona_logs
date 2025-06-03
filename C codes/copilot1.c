#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct b {
    int id;
    char title[50];
    char author[50];
    int isIssued;
} Book;

void addBook() {
    FILE *file = fopen("library.txt", "a");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    Book book;
    printf("Enter Book ID: ");
    scanf("%d", &book.id);
    printf("Enter Title: ");
    scanf(" %[^\n]", book.title);
    printf("Enter Author: ");
    scanf(" %[^\n]", book.author);
    book.isIssued = 0; // Default to not issued

    fwrite(&book, sizeof(Book), 1, file);
    fclose(file);
    printf("Book added successfully!\n");
}

void listBooks() {
    FILE *file = fopen("library.txt", "r");
    if (!file) {
        printf("No books found.\n");
        return;
    }

    Book book;
    printf("\nLibrary Books:\n");
    while (fread(&book, sizeof(Book), 1, file)) {
        printf("ID: %d, Title: %s, Author: %s, Issued: %s\n", 
               book.id, book.title, book.author, 
               book.isIssued ? "Yes" : "No");
    }
    
    fclose(file);
}

int main() {
    int choice;
    while (1) {
        printf("\nLibrary Management System\n1. Add Book\n2. List Books\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addBook();
        } else if (choice == 2) {
            listBooks();
        } else {
            printf("Exiting...\n");
            break;
        }
    }

    return 0;
}
