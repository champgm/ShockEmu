dpadRight = DOWN(124);
dpadDown = DOWN(125);
L2 = rightMouse;
X = DOWN(49);
R2 = leftMouse;
leftX = leftY = 0;
if(DOWN(0)) leftX -= 127;
square = DOWN(8);
R1 = DOWN(14);
if(DOWN(2)) leftX += 127;
O = DOWN(3);
options = DOWN(34);
L3 = DOWN(56);
dpadUp = DOWN(126);
touchpad = DOWN(31);
L1 = DOWN(12);
PS = DOWN(35);
if(DOWN(1)) leftY += 127;
triangle = DOWN(15);
if(DOWN(13)) leftY -= 127;
R3 = DOWN(9);
dpadLeft = DOWN(123);
if(mouseMoved) {
    //NSLog(@"mouseAccelX = %f mouseAccelY = %f", mouseAccelX, mouseAccelY);
	rightX = mouseVelX*20;
	rightY = mouseVelY*20;
	mouseMoved = false;
} else {
	rightX /= 1.2;
	rightY /= 1.2;
    mouseVelX /=1.2;
    mouseVelY /=1.2;
	if(fabs(rightX) > .02 || fabs(rightY) > .02) {
		[self decayKick];
	} else
		rightX = rightY = 0;
}
