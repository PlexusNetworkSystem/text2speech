 //prm:  -lespeak
#include <iostream>
#include <espeak/speak_lib.h>
#include <math.h>
#include <cstring>
  using namespace std;
  int main(int argc, char * argv[])
  {
      // Initialize the eSpeak library
  espeak_Initialize(AUDIO_OUTPUT_PLAYBACK, 0, NULL, 0);

  // Set the text to be synthesized and the language
  const char* text = "Hello, world!";
  const char* language = "en";

  // Synthesize the text to speech and play it back
  espeak_Synth(text, strlen(text) + 1, 0, POS_CHARACTER, 0,
               espeakCHARS_UTF8, NULL, NULL);
  espeak_Synchronize();

  // Clean up the eSpeak library
  espeak_Terminate();
    return 0;
  }
  
