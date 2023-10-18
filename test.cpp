#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define MAX_BOOKS 100

typedef struct
{
    char title[50];
    char author[50];
    int pub;
    float price;
} libro;

int bookCount = 0;

void createBook()
{
    if (bookCount >= MAX_BOOKS)
    {
        printf("Maximum number of books reached (100). Cannot add more books.\n");
        return;
    }

    libro *book = (libro *)malloc(sizeof(libro)); // Dynamically allocate memory for a libro structure

    printf("\t\tENTER BOOK DETAILS");
    printf("\n\nEnter title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = '\0';

    printf("Enter author: ");
    fgets(book->author, sizeof(book->author), stdin);
    book->author[strcspn(book->author, "\n")] = '\0';

    printf("Enter publication year: ");
    scanf("%d", &(book->pub));
    getchar();

    printf("Enter price: ");
    scanf("%f", &(book->price));
    getchar();

    FILE *file = fopen("book.txt", "a");
    if (file == NULL)
    {
        printf("\n\nError opening file.\n");
        free(book); // Free the dynamically allocated memory before returning
        return;
    }

    fprintf(file, "Title: %s\n", book->title);
    fprintf(file, "Author: %s\n", book->author);
    fprintf(file, "Publication Year: %d\n", book->pub);
    fprintf(file, "Price: %.2f\n", book->price);

    fclose(file);
    free(book); // Free the dynamically allocated memory after writing to the file

    printf("\n\nBOOK created and saved successfully.\n");
}

void readBook()
{
    FILE *file = fopen("book.txt", "r");
    if (file == NULL)
    {
        printf("\n\nError opening file.\n");
        return;
    }

    char line[100];
    int bookCount = 0;
    int newLineCount = 0;

    printf("\n\n\t\t\tList of Books\n");

    while (fgets(line, sizeof(line), file))
    {
        if (strncmp(line, "Title:", 6) == 0)
        {
            bookCount++;
            newLineCount = 0;
            printf("%s", line);
        }
        else
        {
            printf("%s", line);

            // Check for empty lines to ensure at least 2 new lines between books
            if (line[0] == '\n')
            {
                newLineCount++;
                if (newLineCount >= 2 && bookCount > 1)
                {
                    // Exit the loop after printing the current book and the required new lines
                    break;
                }
            }
            else
            {
                newLineCount = 0;
            }
        }
    }

    fclose(file);
}

void updateBook()
{
    FILE *file = fopen("book.txt", "r");
    if (file == NULL)
    {
        printf("\n\nError opening file.\n");
        return;
    }

    char line[100];
    int bookIndex = 1;
    char titles[MAX_BOOKS][50];
    int selectedBook = -1;

    printf("\n\n\t\tList of Books\n");
    while (fgets(line, sizeof(line), file))
    {
        if (strncmp(line, "Title:", 6) == 0)
        {
            printf("%d. %s", bookIndex, line + 7);
            strcpy(titles[bookIndex - 1], line + 7);
            bookIndex++;
        }
    }

    fclose(file);

    char bookNum[50];

    printf("\n\nEnter the number of the book to update: ");
    fgets(bookNum, sizeof(bookNum), stdin);
    bookNum[strcspn(bookNum, "\n")] = '\0';

    int bookChoice = atoi(bookNum);
    if (bookChoice >= 1 && bookChoice <= bookIndex - 1)
    {
        selectedBook = bookChoice;
    }
    else
    {
        printf("\n\nInvalid book number: %d\n", bookChoice);
        return;
    }

    if (selectedBook != -1)
    {
        FILE *file = fopen("book.txt", "r+");
        if (file == NULL)
        {
            printf("\n\nError opening file.\n");
            return;
        }

        int currentBook = 1;
        int found = 0;

        while (fgets(line, sizeof(line), file))
        {
            if (strncmp(line, "Title:", 6) == 0)
            {
                if (currentBook == selectedBook)
                {
                    found = 1;
                    libro *book = (libro *)malloc(sizeof(libro));
                    printf("\n\nUpdating Book: %s", line + 7);

                    printf("\nEnter new title (or press Enter to keep the existing title): ");
                    fgets(book->title, sizeof(book->title), stdin);
                    book->title[strcspn(book->title, "\n")] = '\0';

                    printf("\nEnter new author (or press Enter to keep the existing author): ");
                    fgets(book->author, sizeof(book->author), stdin);
                    book->author[strcspn(book->author, "\n")] = '\0';

                    printf("\nEnter new publication year (or press Enter to keep the existing publication year): ");
                    fgets(line, sizeof(line), stdin);
                    line[strcspn(line, "\n")] = '\0';
                    if (line[0] != '\0')
                        book->pub = atoi(line);
                    else
                        book->pub = atoi(titles[selectedBook - 1]);

                    printf("\nEnter new price (or press Enter to keep the existing price): ");
                    fgets(line, sizeof(line), stdin);
                    line[strcspn(line, "\n")] = '\0';
                    if (line[0] != '\0')
                        book->price = atof(line);
                    else
                        book->price = atof(titles[selectedBook - 1]);

                    fseek(file, -strlen(line), SEEK_CUR);
                    fprintf(file, "Title: %s\n", (book->title[0] != '\0') ? book->title : titles[selectedBook - 1]);
                    fprintf(file, "Author: %s\n", (book->author[0] != '\0') ? book->author : titles[selectedBook - 1]);
                    fprintf(file, "Publication Year: %d\n", book->pub);
                    fprintf(file, "Price: %.2f\n", book->price);
                    fprintf(file, "\n");

                    free(book);
                }
                currentBook++;
            }
        }

        fclose(file);

        if (found)
        {
            printf("\n\nBook updated successfully.\n");
        }
        else
        {
            printf("\n\nBook not found.\n");
        }
    }
    else
    {
        printf("\n\nNo valid book number selected.\n");
    }
}

void deleteBook()
{
    FILE *file = fopen("book.txt", "r");
    if (file == NULL)
    {
        printf("\n\nError opening file.\n");
        return;
    }

    char line[100];
    int bookIndex = 1;
    char titles[MAX_BOOKS][50];
    int selectedBook = -1;

    printf("\n\n\t\tList of Books\n");
    while (fgets(line, sizeof(line), file))
    {
        if (strncmp(line, "Title:", 6) == 0)
        {
            printf("%d. %s", bookIndex, line + 7);
            strcpy(titles[bookIndex - 1], line + 7);
            bookIndex++;
        }
    }

    fclose(file);

    char bookNum[50];
    char confirmChoice;

    printf("\n\nEnter the number of the book to delete: ");
    fgets(bookNum, sizeof(bookNum), stdin);
    bookNum[strcspn(bookNum, "\n")] = '\0';

    int bookChoice = atoi(bookNum);
    if (bookChoice >= 1 && bookChoice <= bookIndex - 1)
    {
        selectedBook = bookChoice;
    }
    else
    {
        printf("\n\nInvalid book number: %d\n", bookChoice);
        return;
    }

    if (selectedBook != -1)
    {
        printf("\n\nAre you sure you want to delete the selected book? (Y/N): ");
        scanf(" %c", &confirmChoice);
        getchar();

        if (toupper(confirmChoice) == 'Y')
        {
            FILE *tempFile = fopen("temp.txt", "w");
            if (tempFile == NULL)
            {
                printf("\n\nError opening file.\n");
                return;
            }

            file = fopen("book.txt", "r");
            if (file == NULL)
            {
                printf("\n\nError opening file.\n");
                return;
            }

            int currentBook = 1;
            int found = 0;

            while (fgets(line, sizeof(line), file))
            {
                if (strncmp(line, "Title:", 6) == 0)
                {
                    if (currentBook != selectedBook)
                    {
                        fputs(line, tempFile);
                    }
                    else
                    {
                        found = 1;
                    }

                    currentBook++;
                }
                else
                {
                    if (currentBook != selectedBook)
                    {
                        fputs(line, tempFile);
                    }
                }
            }

            fclose(file);
            fclose(tempFile);

            if (found)
            {
                remove("book.txt");
                rename("temp.txt", "book.txt");
                printf("\n\nBook deleted successfully.\n");
            }
            else
            {
                remove("temp.txt");
                printf("\n\nBook not found.\n");
            }
        }
        else
        {
            printf("\n\nDeletion of book canceled.\n");
        }
    }
    else
    {
        printf("\n\nNo valid book number selected.\n");
    }
}

void renameBook()
{
    FILE *file = fopen("book.txt", "r");
    if (file == NULL)
    {
        printf("\n\nError opening file.\n");
        return;
    }

    char line[100];
    int bookIndex = 1;
    char titles[MAX_BOOKS][50];
    int selectedBook = -1;

    printf("\n\n\t\tList of Books\n");
    while (fgets(line, sizeof(line), file))
    {
        if (strncmp(line, "Title:", 6) == 0)
        {
            printf("%d. %s", bookIndex, line + 7);
            strcpy(titles[bookIndex - 1], line + 7);
            bookIndex++;
        }
    }

    fclose(file);

    char bookNum[50];

    printf("\n\nEnter the number of the book to rename: ");
    fgets(bookNum, sizeof(bookNum), stdin);
    bookNum[strcspn(bookNum, "\n")] = '\0';

    int bookChoice = atoi(bookNum);
    if (bookChoice >= 1 && bookChoice <= bookIndex - 1)
    {
        selectedBook = bookChoice;
    }
    else
    {
        printf("\n\nInvalid book number: %d\n", bookChoice);
        return;
    }

    if (selectedBook != -1)
    {
        FILE *newFile = fopen("book.txt", "w");
        if (newFile == NULL)
        {
            printf("\n\nError opening file.\n");
            return;
        }

        int currentBook = 1;

        while (fgets(line, sizeof(line), file))
        {
            if (strncmp(line, "Title:", 6) == 0)
            {
                if (currentBook == selectedBook)
                {
                    libro book; // Declare libro object directly instead of dynamically allocating

                    printf("\n\nEnter new title: ");
                    fgets(book.title, sizeof(book.title), stdin);
                    book.title[strcspn(book.title, "\n")] = '\0';

                    // Copy other book details
                    fgets(book.author, sizeof(book.author), file);
                    fgets(line, sizeof(line), file);
                    fgets(line, sizeof(line), file);

                    fprintf(newFile, "Title: %s\n", book.title);
                    fprintf(newFile, "Author: %s", book.author);
                    fprintf(newFile, "%s", line);
                }
                else
                {
                    fputs(line, newFile);
                }

                currentBook++;
            }
            else
            {
                fputs(line, newFile);
            }
        }

        fclose(newFile);

        printf("\n\nBook renamed successfully.\n");
    }

    else
    {
        printf("\n\nNo valid book number selected.\n");
    }
}

void viewList()
{
    FILE *file = fopen("book.txt", "r");
    if (file == NULL)
    {
        printf("\n\nError opening file.\n");
        return;
    }

    char line[100];
    printf("\n\n\t\tLIST OF BOOKS\n");
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }

    fclose(file);
}

int main()
{
    int choice;
    int endProgram = 0;
    char b;
badayos:
    do
    {
        printf("\n\t\t\tMenu\n\n");
        printf("[1] Create Book\n");
        printf("[2] Read Book\n");
        printf("[3] Update Book\n");
        printf("[4] Delete Book\n");
        printf("[5] Rename Book\n");
        printf("[6] View list\n");
        printf("[0] Quit\n");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();
        system("cls");
        switch (choice)
        {
        case 1:
            createBook();
            goto clester;
        case 2:
            readBook();
            goto clester;
        case 3:
            updateBook();
            goto clester;
        case 4:
            deleteBook();
            goto clester;
        case 5:
            renameBook();
            goto clester;
        case 6:
            viewList();
            goto clester;
        case 0:
            printf("Exiting program.\n");
            endProgram = 1;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (!endProgram);

clester:
    printf("\nGo Back to Menu? Enter y/n?: ");
    scanf(" %c", &b);
    system("cls");

    if (b == 'y' || b == 'Y')
    {
        goto badayos;
    }
    else if (b == 'n' || b == 'N')
    {
        printf("The program will now exit.\n");
    }
    else
    {
        printf("\n\n\t\tINVALID CHOICE\n");
        goto badayos;
    }

    return 0;
}