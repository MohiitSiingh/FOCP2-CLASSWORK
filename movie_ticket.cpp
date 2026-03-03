#include <iostream>
#include <string>
using namespace std;
                                                  
class MovieTicket {
private:
string movieName;
int seatNumber;
double ticketPrice;
bool isBooked;

public:

MovieTicket() {
movieName = "Unknown";
seatNumber = -1;
ticketPrice = 200;   
isBooked = false;
    }

    MovieTicket(string name, int seat, double price) {
        movieName = name;
        seatNumber = seat;
        ticketPrice = price;
        isBooked = false;  
    }

    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket booked successfully for " << movieName
                 << " (Seat: " << seatNumber << ")" << endl;
        } else {
            cout << "Ticket already booked!" << endl;
        }
    }

    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket cancelled for " << movieName
                 << " (Seat: " << seatNumber << ")" << endl;
        } else {
            cout << "No booking found to cancel!" << endl;
        }
    }

    void displayTicketDetails() {
        cout << "Movie: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Price: " << ticketPrice << endl;
        cout << "Booked: " << (isBooked ? "Yes" : "No") << endl;
        cout << "-----------------------------" << endl;
    }

    double calculateTotalCost(int numberOfTickets) {
        return ticketPrice * numberOfTickets;
    }
};

int main() {
  
MovieTicket ticket1("Inception", 12, 250);
MovieTicket ticket2("Interstellar", 15, 300);

ticket1.displayTicketDetails();
ticket2.displayTicketDetails();

ticket1.bookTicket();
ticket2.bookTicket();

ticket1.bookTicket();

ticket2.cancelTicket();

ticket1.displayTicketDetails();
ticket2.displayTicketDetails();

cout << "Total cost for 3 tickets of Inception: "<< ticket1.calculateTotalCost(3);

    return 0;
}