/*
  Multiple tone player

  Plays multiple tones on multiple pins in
  sequence

  circuit:
  * 3 8-ohm speaker on digital pins 6, 7, and 8

  created 8 March 2010  by Tom Igoe  based on a
  snippet from Greg Borenstein

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Tone4
*/

int pos = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  // 关闭8号引脚的音调
  noTone(8);
  // 打开6号引脚，产生880hz的音调持续200ms
  tone(6, 880, 200); 
  delay(200); // 等待200ms
  // 关闭6号引脚的音调
  noTone(6);
  // 打开7号引脚，产生988hz的音调持续500ms
  tone(7, 988, 500); 
  delay(500); // 等待200ms
  // 关闭7号引脚的音调
  noTone(7);
  // 打开8号引脚，产生1047hz的音调持续300ms
  tone(8, 1047, 300); 
  delay(300); //等待300ms
}