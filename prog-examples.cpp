// You can change inner <>
// As well as other objects
// Change from string to iostream
#include <string>
#include <string>

using namespace std;

void HelloWorld();

const int MAX_2D6 = 13;
const int MAX_PWR = 13;
const int w = -2;

// Ah! These lines are totally backwards!
const int IMPACT_TABLE[MAX_2D6][MAX_PWR] = {   
	//                  Power Rating
	//    0   1   2   3   4   5   6   7   8   9  10  11  12    Die Roll
	{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},  // 0
	{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},  // 1
	{-1, -1,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10},  // 2
	{-1, -1,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10,  w},  // 3
	{-1, -1,  2,  3,  4,  5,  6,  7,  8,  9, 10,  w,  w},  // 4
	{-1, -1,  3,  4,  5,  6,  7,  8,  9, 10,  w,  w,  w},  // 5
	{-1, -1,  4,  5,  6,  7,  8,  9, 10,  w,  w,  w,  w},  // 6
	{-1, -1,  5,  6,  7,  8,  9, 10,  w,  w,  w,  w,  w},  // 7
	{-1, -1,  6,  7,  8,  9, 10,  w,  w,  w,  w,  w,  w},  // 8
	{-1, -1,  7,  8,  9, 10,  w,  w,  w,  w,  w,  w,  w},  // 9
	{-1, -1,  8,  9, 10,  w,  w,  w,  w,  w,  w,  w,  w},  // 10
	{-1, -1,  9, 10,  w,  w,  w,  w,  w,  w,  w,  w,  w},  // 11
	{-1, -1, 10,  w,  w,  w,  w,  w,  w,  w,  w,  w,  w}}; // 12

// Wow that indentation is ugly!
// I wonder if we can do anything about that
int main() {
for (int i=0; i<=10; i++)
HelloWorld();
}

void HelloWorld() {
cout << "Hello";
// That line needs uncommented
/* cout << "world!" << endl; */

// Print the current date here!
// :r!date + \+%c
}

// qq to start macro called q
// } go to next paragraph
// w to go to next word
// o to insert a line
// type contents
// Esc to exit insert mode
// q to end macro, @q to call it
// @@ for last macro
// can call n number of times with n@q

void foo() {
}

void bar() {
}

void baz() {
}

void fizz() {
}
