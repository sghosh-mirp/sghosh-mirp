

float MAX_VELOCITY = 10;

float gravity = 0.0;


float restitutionCoeff = 1.0;

char UP = 'w', LEFT = 'a', RIGHT = 'd',DOWN = 's';
boolean up, left, right, down;

boolean keys[] = new boolean [4];

void setup() {
  size(displayWidth, displayHeight);
  ballX=displayWidth/2;
  ballY=displayHeight/2;
  ballVx = 10;
  ballVy =  5;
  textFont(createFont("Arial Bold", 50));
}

void draw() {
  background(bgColor);
  detectKeys();
  drawBall();
  updateBallVelocity();
  updateBallPosition();
  resolveCollisions();
  drawPaddle();
  displayScore();

}

void drawBall() {
  fill(ballColor);
  
  ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
}
void drawPaddle() {
  fill(paddleColor);
  
  rect(0,leftPaddle,paddleWidth,paddleLength );
  rect(displayWidth-paddleWidth,rightPaddle,paddleWidth,paddleLength );
}