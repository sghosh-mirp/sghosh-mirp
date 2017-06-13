void updateBallVelocity() {

  ballVy += gravity;

  
  // Add control for movement keys here
}

  

void updateBallPosition() {
  ballX += ballVx;
  ballY += ballVy;
}
void updatePaddlePosition(){
  leftPaddle+=rightPaddle;
  rightPaddle+=leftPaddle;
}
  

void resolveCollisions() {
  println(ballVy,ballVx);
  // Resolving Collisions with floor (bottom wall).
  if (ballY > displayHeight-ballRadius){
    ballY = displayHeight-ballRadius;
    ballVy *= -restitutionCoeff;
  }
       if (ballY < ballRadius){
    ballY = ballRadius;
    ballVy *= -restitutionCoeff;
     }

    if (ballX > displayWidth-ballRadius){
    ballX = displayWidth-ballRadius;
    ballVx *= -restitutionCoeff;
    }

     if (ballX < ballRadius){
    ballX = ballRadius;
    ballVx *= -restitutionCoeff;
     }
   if(ballX < paddleWidth+ballRadius && ballY > leftPaddle && ballY < leftPaddle + paddleLength)
   {

         ballVx *= -1;
         ballX = paddleWidth+ballRadius;         
      
   }
    if(ballX > displayWidth-paddleWidth-ballRadius && ballY > rightPaddle && ballY < rightPaddle + paddleLength)
   {
      ballVx *= -1;
        ballX = displayWidth-paddleWidth-ballRadius;
}

  if (ballX <= ballRadius){
    leftLose();
  }
  if (ballX >= displayWidth -ballRadius){
 rightLose();
}
}