# Mood Light RGB LED 🌈

This project creates a beautiful **mood light** using an RGB LED and a potentiometer on Arduino. It uses the HSV color model to smoothly fade between colors, controlled manually or automatically.

---

## 🔧 Features
- 🌈 Smooth color transitions using HSV to RGB conversion
- 🎚️ Manual control with a potentiometer (Phase 2)
- 🔁 Auto-color cycling (Phase 1)
- 🕹️ Future upgrades: Remote control & light sensor

---

## 🎮 Available Modes

| Mode                  | Description                                 |
|-----------------------|---------------------------------------------|
| 🔁 Automatic Mode      | Colors cycle automatically (no input needed) |
| 🎚️ Potentiometer Mode | Adjust colors manually with a potentiometer  |

> Each mode has its own `.ino` file inside its respective folder.

---

## 🎬 Video Demo
📺 Watch it on Instagram: [@gideong10](https://instagram.com/gideong10)

---

## 🧠 How It Works
- The potentiometer controls **hue** (color wheel position)
- The **HSV** model converts hue + brightness to **RGB**
- PWM signals are sent to pins driving the RGB LED

---

## 💡 Hardware Required
- ✅ Arduino Uno R3
- ✅ RGB LED (Common Cathode)
- ✅ 220Ω resistors (x3)
- ✅ Potentiometer
- ✅ Breadboard + Jumper wires

---

## 📂 Project Phases
1. ✅ **Auto-color change** (no input)
2. ✅ **Potentiometer-based control**
3. 🔜 **Remote-based control**
4. 🔜 **Photoresistor-based mood lighting**

---

## 📎 License
MIT – free to use, modify, and share.

---

Made with ❤️ by [Gideon Klenam]


