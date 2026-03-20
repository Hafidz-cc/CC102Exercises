#include <iostream>
using namespace std;

// Get rating category
string getCategory(int rating) {
    switch (rating) {
        case 5: return "Excellent";
        case 4: return "Very Good";
        case 3: return "Good";
        case 2: return "Fair";
        case 1: return "Poor";
        default: return "No Rating";
    }
}


void input(int n, auto books[]) {
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;

        int unique;

        do {
            unique = 1; 

            cout << "Enter Barcode: ";
            cin >> books[i].barcode;

            for (int j = 0; j < i; j++) {
                if (books[i].barcode == books[j].barcode) {
                    cout << "Barcode already exists! Try again.\n";
                    unique = 0;
                }
            }

        } while (unique == 0);

        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, books[i].title);

        cout << "Enter Year Published: ";
        cin >> books[i].year;

        cout << "Enter Rating (0-5): ";
        cin >> books[i].rating;
    }
}


void display(int n, auto books[]) {
    cout << "\n\nBOOK LIST\n";

    cout << "---------------------------------------------\n";
    cout << "Barcode | Title | Year | Rating | Category\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << books[i].barcode << " | "
             << books[i].title << " | "
             << books[i].year << " | "
             << books[i].rating << " | "
             << getCategory(books[i].rating) << endl;
    }

    cout << "---------------------------------------------\n";
}

int main() {
    char choice;

    do {
        int n;
        cout << "Enter number of books: ";
        cin >> n;

        
        struct book {
            int barcode;
            string title;
            int year;
            int rating;
        };

        book books[n];

        inputBooks(n, books);
        displayBooks(n, books);

        cout << " Repeat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}