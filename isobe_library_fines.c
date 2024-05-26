// Programmer Name: Jennifer Isobe 
// Program Name: Assignment 3 Library Fines Calculator
// Date: 2/28/2024

// Assignment Content
// This Project requires concepts inclusive of Chapters 1-3.

// You must use branching (Chapter 3) and variables with correct data types and format specifiers (Chapter 2). 

// Careful attention to detail on format is very important for this project. Please reference the example output provided.

// You have been hired by Tulsa County library to write a C program to calculate library fines.

// The program will ask the user for the value of the book, how many days a book was borrowed as agreed, as well as how many days the book was actually kept. The difference between those will be the number of days the fine will be calculated on (the fine must be capped at the price of the book).

// Fines are as follows:

// 1 to 7 days = 50 cents per day

// 8 to 21 days = $1.25 per day

// 21 to 30 Days = $2.25 per day

// 31 days and beyond $4 per day

#include <stdio.h>

int main(void){

  // Declare and initialize variables
  double bookPrice = 0;
  double fineTotal = 0;
  int agreedDaysToBorrow = 0;
  int daysKept = 0;
  int daysOverdue = 0;

  // Introduce the program
  printf("Welcome to the Tulsa County library fine calculator\n");

  // Get price of book
  printf("\nPlease enter price of the book: ");
  scanf("%lf", &bookPrice);

  // Get agreed days to borrow the book
  printf("\nPlease enter agreed days borrow: ");
  scanf("%d", &agreedDaysToBorrow);

  // Get days book was actually kept
  printf("\nPlease enter days kept: ");
  scanf("%d", &daysKept);

  // Calculate days overdue
  daysOverdue = daysKept - agreedDaysToBorrow;

  // Calculate fine based on days overdue
  // 1 to 7 days = 50 cents per day
  // 8 to 21 days = $1.25 per day
  // 21 to 30 Days = $2.25 per day
  // 31 days and beyond $4 per day

  if (daysOverdue < 1){
    fineTotal = 0;
  }
  else if (daysOverdue <= 7){
    fineTotal = .50 * daysOverdue;
  }
  else if (daysOverdue <= 21){
    fineTotal = 1.25 * daysOverdue;
  }
  else if (daysOverdue <= 30){
    fineTotal = 2.25 * daysOverdue;
  }
  else {
    fineTotal = 4 * daysOverdue;
  }

  // Check if fine total is more than book value. If so, fine is book value
  if (fineTotal > bookPrice){
    fineTotal = bookPrice;
  }

  // Print the fine due for the book
  printf("\nAgreement was %d days but book kept for %d days, fine for %d days is $%.2lf", agreedDaysToBorrow, daysKept, daysOverdue, fineTotal);

  return 0;
}