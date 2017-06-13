
void rightLose() {

  leftScore++;
  {
   
  displayScore();}
  }
 void leftLose() {
  rightScore++;

  displayScore();}

void displayScore()
{
  text(leftScore,displayWidth/4,displayHeight/3);
  text(rightScore,displayWidth*3/4,displayHeight/3);
}