int iterationCounter = 0;

void loop(){
}

void setup(){
  DigiKeyboard.update();
  if (iterationCounter == 0) {
   
    DigiKeyboard.sendKeyStroke(0);

    DigiKeyboard.delay(KEYSTROKE_DELAY);

  DigiKeyboard.delay(6000);
  DigiKeyboard.sendKeyStroke(21,128); //R + Windows Keys
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("powershell Start-Process cmd -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(28,64); //Y + right ALT
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("ping -t heise.de");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  }
  delay(1000);
  iterationCounter++;
}
