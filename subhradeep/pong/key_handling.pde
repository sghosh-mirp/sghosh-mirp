void keyPressed() {
  if (key == LEFT_UP)       left_up = true;
  if (key == LEFT_DOWN)     left_down = true;
  if (key == RIGHT_UP)      right_up = true;
  if (key == RIGHT_DOWN)    right_down = true;
  if (key == RESET)         reset = true;
  if (key == PAUSE)         pause = true;
  if (key == START)         start = true;
  if (key == UP)       up = true;
  if (key == LEFT)     left = true;
  if (key == RIGHT)    right = true;
  if (key == DOWN)    down = true;
}


void keyReleased() {
  if (key == LEFT_UP)       left_up = false;
  if (key == LEFT_DOWN)     left_down = false;
  if (key == RIGHT_UP)      right_up = false;
  if (key == RIGHT_DOWN)    right_down = false;
  if (key == RESET)         reset = false;
  if (key == PAUSE)         pause = false;
  if (key == START)         start = false;
  
   if (key == UP)       up = false;
  if (key == LEFT)     left = false;
  if (key == RIGHT)    right = false;
  if (key == DOWN)    down = false;
}
float radiusIncrement = 0.5;

void detectKeys() {
  println(ballRadius);
  if (left)
   ballX-=ballRadius;
   
  if (right)
   ballX+=ballRadius;
   
    if (up)
   ballY-=ballRadius;
   
  if (down)
   ballY+=ballRadius;
   
  if(left_up)
    leftPaddle -= PADDLE_VELOCITY;
    
    if(left_down)
    leftPaddle += PADDLE_VELOCITY;
    
    if(right_up)
    rightPaddle -= PADDLE_VELOCITY;
     
     if(right_down)
     rightPaddle += PADDLE_VELOCITY;
     
    
     
     
     
     
     
}