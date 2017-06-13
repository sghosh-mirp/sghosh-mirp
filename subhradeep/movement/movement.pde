int displayWidth=1400, displayHeight=400;

float MAX_VELOCITY = 10;

color bgColor = color(400,0,0);

float gravity = 0.0;
float ballX, ballY;
float ballVx , ballVy ;
float ballRadius = 10;
color ballColor = color(0,0, 70000);

float restitutionCoeff = 0.95;

char UP = 'w', LEFT = 'a', RIGHT = 'd',DOWN = 's';
boolean up, left, right, down;

boolean keys[] = new boolean [4];

void setup() {
  size(displayWidth, displayHeight);
  ballX=displayWidth/2;
  ballY=displayHeight/2;
  ballVx = 5;
  ballVy =  0;
}

void draw() {
  background(bgColor);
  detectKeys();
  drawBall();
  updateBallVelocity();
  updateBallPosition();
  resolveCollisions();
}

void drawBall() {
  fill(ballColor);
  
  ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
}