#include <iostream>
#include "gfx.h"
using namespace std;

int main() {
	char c;

	gfx_open(500, 500, "figura");
	gfx_color(0,200,100);
	setTurtlePos(200,200);

	draw(100);
	turn(90);
	draw(100);
	turn(90);
	draw(100);
	turn(90);
	draw(100);

	c=gfx_wait();
}