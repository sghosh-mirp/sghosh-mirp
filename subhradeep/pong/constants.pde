// Display Size
int displayWidth=1200, displayHeight=800;
// Velocity Cnstants
float BALL_VELOCITY = 2000; //This is the MAX speed of the ball.
float PADDLE_VELOCITY = 10;
// Background Color
int bgColor = 255;
// Ball parameters
float ballX, ballY;
float ballVx, ballVy; // ballVx is always BALL_VELOCTY or -BALL_VELOCITY; ballVy varies.
float ballRadius = 10;
color ballColor = color(55,0,0);
// Y - position of Left and Right paddles
float leftPaddle=displayHeight/2, rightPaddle=displayHeight/2;
// Paddle Dimensions
float paddleLength = 180, paddleWidth = 20;
color paddleColor =0;
// Score Variables
int leftScore, rightScore;
char win='l',win1='r';
// Game Controls
char RESET = 'g', PAUSE = 'p', START = 't';
// Keyoard Handling Booleans
boolean left_up, right_up, left_down, right_down;
boolean reset, pause, start;

// Controls for the Left Paddle
char LEFT_UP = 'v', LEFT_DOWN = 'b';
// Controls for the Right Paddle
char RIGHT_UP = 'n', RIGHT_DOWN = 'm';