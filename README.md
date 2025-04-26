# Mood Light RGB LED 🌈

This project creates a beautiful **mood light** using an RGB LED and a potentiometer on Arduino. It uses the HSV color model to smoothly fade between colors, controlled manually or automatically.

---

## 🔧 Features
- Smooth color transitions using HSV to RGB conversion
- Manual control with a potentiometer (Phase 2)
- Auto-color cycling (Phase 1 - coming soon)
- Future upgrade: Remote & light sensor

---

## 🎮 Available Modes

| Mode                | Description                                |
|---------------------|--------------------------------------------|
| 🔁 Automatic Mode    | Colors cycle on their own, no input needed  |
| 🎚️ Potentiometer Mode | Control the color using a potentiometer    |

> Each mode has its own `.ino` file inside its respective folder.

---

## 🎬 Video Demo
Watch it on Instagram: https://instagram.com/gideong10

---

## 🧠 How It Works
- Potentiometer controls the hue (color wheel position)
- HSV model converts hue + brightness to RGB
- RGB values are written to PWM pins connected to an LED

---

## 💡 Hardware Required
- Arduino Uno R3
- RGB LED (Common Cathode)
- 220Ω resistors (x3)
- Potentiometer
- Breadboard + Jumper wires

---

## 📂 Project Phases
1. ✅ Auto-color change (no input needed)
2. ✅ Potentiometer-based color control
3. 🔜 Remote-based color change
4. 🔜 Light sensor-based mood detection

---

## 📎 License
MIT – free to use, modify, and share.

---

Made with ❤️ by [Gideon Klenam]

