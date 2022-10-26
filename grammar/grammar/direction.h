#ifndef _direction_h
#define _direction_h

#include <string>
enum Direction {North,East,South,West};

Direction turnLeft(Direction);

Direction turnRight(Direction);

std::string directionToString(Direction dir);

#endif // !_direction_h

