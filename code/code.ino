/*
  TDTKeyboard - JOSUE GUTIERREZ
  www.josuegutierrez.es

  GIT : https://github.com/JoxuMac/TDTKeyboard
  
*/

#include "Keyboard.h"

const int volumeUpButton = 19; // Volume Up button
bool enableVolumeUpButton = true; // Flag Volume Up button

const int volumeDownButton = 18; // Volume Down button
bool enableVolumeDownButton = true;  // Flag Volume Down button

const int channelUpButton = 20; // Channel Up button
bool enableChannelUpButton = true; // Flag Channel Up button

const int channelDownButton = 21; // Channel Down button
bool enableChannelDownButton = true; // Flag Channel Down button

const int muteButton = 4; // Mute button
bool enableMuteButton = true; // Flag Mute Button

void setup() {
  // Button initializate
  pinMode(volumeUpButton, INPUT_PULLUP); // init volume up button
  pinMode(volumeDownButton, INPUT_PULLUP); // init volume down button
  pinMode(channelUpButton, INPUT_PULLUP); // init channel up button
  pinMode(channelDownButton, INPUT_PULLUP); // init channel down button
  pinMode(muteButton, INPUT_PULLUP); // init mute button
   
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  if(!digitalRead(muteButton)){
    if(enableMuteButton) {
      Keyboard.press(KEY_F2);
      Keyboard.releaseAll();
      enableMuteButton = false;
    }
  } else {
    enableMuteButton = true;
    if(!digitalRead(channelUpButton)){
      if(enableChannelUpButton) {
        Keyboard.press(KEY_UP_ARROW);
        Keyboard.releaseAll();
        //enableChannelUpButton = false;
      }
    } else {
      enableChannelUpButton = true;
      if(!digitalRead(channelDownButton)){
        if(enableChannelDownButton) {
          Keyboard.press(KEY_DOWN_ARROW);
          Keyboard.releaseAll();
        //  enableChannelDownButton = false;
        }
      } else {
        enableChannelDownButton = true;
        if(!digitalRead(volumeUpButton)){
          if(enableVolumeUpButton){
            Keyboard.press(KEY_LEFT_ARROW);
            Keyboard.releaseAll();
            //enableVolumeUpButton = false;
          }
        } else {
          enableVolumeUpButton = true;
          if(!digitalRead(volumeDownButton)){
            if(enableVolumeDownButton){
              Keyboard.press(KEY_RIGHT_ARROW);
              Keyboard.releaseAll();
           //   enableVolumeDownButton = false;
            }
          } else {
            enableVolumeDownButton = true;
          }
        }
      }
    }            
  }
  
  delay(200); //Small delay  
}
