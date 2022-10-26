#include <string>
#include <iostream>
#include "direction.h"
using namespace std;

Direction turnLeft(Direction dir) {
	return Direction((dir + 3) % 4);
}

Direction turnRight(Direction dir) {
	return Direction((dir + 1) % 4);
}

string directionToString(Direction dir) {
	switch (dir) {
	case North: return "North";
	case East: return "East";
	case South: return "South";
	case West: return "West";
	default: return "not define";
	}
}

int main() {
	cout << turnLeft(East) << ":" << directionToString(turnLeft(East)) << endl;
}