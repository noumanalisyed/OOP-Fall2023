#include <iostream>
#include<string>
using namespace std;

class ISBN{
public:
    ISBN() {

    }

    ISBN(string isbnStr) {
        firstPart   = isbnStr.substr(0,1);
        secondPart = isbnStr.substr(2,6);
        thirdPart = isbnStr.substr(9,2);
        fourthPart = isbnStr.substr(12);

    }
    ISBN(const string &firstPart, const string &secondPart, const string &thirdPart, const string &fourthPart)
            : firstPart(firstPart), secondPart(secondPart), thirdPart(thirdPart), fourthPart(fourthPart) {}

    const string &getFirstPart() const {
        return firstPart;
    }

    void setFirstPart(const string &firstPart) {
        ISBN::firstPart = firstPart;
    }

    const string &getSecondPart() const {
        return secondPart;
    }

    void setSecondPart(const string &secondPart) {
        ISBN::secondPart = secondPart;
    }

    const string &getThirdPart() const {
        return thirdPart;
    }

    void setThirdPart(const string &thirdPart) {
        ISBN::thirdPart = thirdPart;
    }

    const string &getFourthPart() const {
        return fourthPart;
    }

    void setFourthPart(const string &fourthPart) {
        ISBN::fourthPart = fourthPart;
    }

    friend ostream &operator<<(ostream &os, const ISBN &isbn) {
        os << isbn.toString();
        return os;
    }
    string toString() const{
        string objectStr = firstPart +" " + secondPart+" " +thirdPart+ " " +fourthPart;
        return objectStr;
    }

private:
    string firstPart;
    string secondPart;
    string thirdPart;
    string fourthPart;
};

class  Book{
public:
    Book(const string &bookTitle, const string &author, const string &publisher, const string &city,
         const string &dateOfPublication, double price,string isbnStr) : bookTitle(bookTitle), author(author), publisher(publisher),
                                                          city(city), dateOfPublication(dateOfPublication),
                                                          price(price),isbn(isbnStr) {}

    const string &getBookTitle() const {
        return bookTitle;
    }

    void setBookTitle(const string &bookTitle) {
        Book::bookTitle = bookTitle;
    }

    const string &getAuthor() const {
        return author;
    }

    void setAuthor(const string &author) {
        Book::author = author;
    }

    const string &getPublisher() const {
        return publisher;
    }

    void setPublisher(const string &publisher) {
        Book::publisher = publisher;
    }

    const string &getCity() const {
        return city;
    }

    void setCity(const string &city) {
        Book::city = city;
    }

    const string &getDateOfPublication() const {
        return dateOfPublication;
    }

    void setDateOfPublication(const string &dateOfPublication) {
        Book::dateOfPublication = dateOfPublication;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        Book::price = price;
    }

    const ISBN &getIsbn() const {
        return isbn;
    }

    void setIsbn(const ISBN &isbn) {
        Book::isbn = isbn;
    }

    friend ostream &operator<<(ostream &os, const Book &book) {
        os << "bookTitle: " << book.bookTitle << "\n author: " << book.author << "\n publisher: " << book.publisher
           << "\n city: " << book.city << "\n Date Of Publication: " << book.dateOfPublication << "\n price: " << book.price
           << "\n isbn: " << book.isbn;
        return os;
    }

private:
    string bookTitle;
    string author;
    string publisher;
    string city;
    string dateOfPublication;
    double price;
    ISBN isbn;
};
int main() {
    ISBN isbn("0 941831 39 6");
    Book book("Object First with Java","David J. Barnes and Micheal Kolling","Prentice Hall","New York","Dec 20,2020",45,"0 941831 39 6");

    cout<<book<<endl;
    return 0;
}
