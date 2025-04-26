// AutoColorMoodLight.ino
// Smoothly cycles through colors using HSV model and RGB LED

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

float hue = 0.0;  // Current hue value (0 to 360)

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Convert hue (HSV) to RGB and display it
  byte r, g, b;
  hsvToRgb(hue, 1.0, 1.0, &r, &g, &b);

  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);

  hue += 1;                 // Gradually change hue
  if (hue > 360) hue = 0;   // Wrap around the color wheel

  delay(10);  // Smooth fading delay
}

// Converts HSV color values to RGB
void hsvToRgb(float h, float s, float v, byte* r, byte* g, byte* b) {
  float c = v * s;
  float x = c * (1 - abs(fmod(h / 60.0, 2) - 1));
  float m = v - c;
  float r1, g1, b1;

  if (h < 60)       { r1 = c; g1 = x; b1 = 0; }
  else if (h < 120) { r1 = x; g1 = c; b1 = 0; }
  else if (h < 180) { r1 = 0; g1 = c; b1 = x; }
  else if (h < 240) { r1 = 0; g1 = x; b1 = c; }
  else if (h < 300) { r1 = x; g1 = 0; b1 = c; }
  else              { r1 = c; g1 = 0; b1 = x; }

  *r = (r1 + m) * 255;
  *g = (g1 + m) * 255;
  *b = (b1 + m) * 255;
}
