/**
 * Demo program for message-board exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-03
 */

#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	ariel::Board board;

	board.post(/*row=*/100, /*column=*/200, Direction::Horizontal, "abcd");
	//cout << board.read(/*row=*/99, /*column=*/201, Direction::Vertical, /*length=*/3) << endl;
	// prints "_b_" (starts at row 99 which is empty; then at row 100 there is "b"; then row 101 is empty again).
	board.post(/*row=*/99, /*column=*/202, Direction::Vertical, "xyz");
	//cout << board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/6) << endl;
	// prints "abyd__" (First letters are ab; then y from the "xyz"; then d; then two empty cells).


	board.post(103, 203, Direction::Horizontal, "Hello World"); // print hello world at row 103
	//cout << board.read(103, 203, Direction::Horizontal, 11) << endl;
	board.post(103, 203, Direction::Horizontal, "Hey World"); // left "ld" from before shorter than hello so replce all except 2 chars
	//cout << board.read(103, 203, Direction::Horizontal, 9) << endl;
	board.post(103, 208, Direction::Vertical, "Oz Cohen"); // post "oz cohen" from 103 - 110 
	board.post(106,209,Direction::Horizontal,"ohen"); // add ohen to the "c"
	board.post(107,209,Direction::Horizontal,"Z"); // add Z to the o 
	board.post(107,208,Direction::Horizontal,"MATIAS"); // RUN OVER OZ AND POST MATIAS INSTEAD



	board.show(); // shows the board in a reasonable way. For example:

				//  98: ________________
				//  99: ___x____________
				// 100: _abyd___________
				// 101: ___z____________
				// 102: ________________
				// 103: ____Hey Worldld_
				// 104: _________z______
				// 105: _________ ______
				// 106: _________Cohen__
				// 107: _________oZ_____
				// 108: _________h______
				// 109: _________e______
				// 110: _________n______
				
				
				
				// after post matias 
				//  98: ________________
				//  99: ___x____________
				// 100: _abyd___________
				// 101: ___z____________
				// 102: ________________
				// 103: ____Hey Worldld_
				// 104: _________z______
				// 105: _________ ______
				// 106: _________Cohen__
				// 107: _________MATIAS_
				// 108: _________h______
				// 109: _________e______
				// 110: _________n______

}

