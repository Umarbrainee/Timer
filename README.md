# Timer Project – Simple Delay-Activated Buzzer Timer

**Tinkercad Project Link:**  
[https://www.tinkercad.com/things/7EKif7Vgqq1-timer?sharecode=YyXd9bNL5LWPBskYRg_KxsNtBiTITuYKMkJKlZsrW1UA](https://www.tinkercad.com/things/7EKif7Vgqq1-timer?sharecode=YyXd9bNL5LWPBskYRg_KxsNtBiTITuYKMkJKlZsrW1UA)

---

## Overview  
This project is a **delay timer** built on a microcontroller (e.g., Arduino) in Tinkercad. You send a delay command (in milliseconds), and once the delay period elapses, a buzzer starts buzzing. The timer can be turned off manually using a push button, but doing so requires re-uploading the code to run again.

---

## Features  
- **Custom delay:** The timer waits for a user-specified delay (in milliseconds) before activating the buzzer.  
- **Audio alert:** A buzzer sounds when the timer completes the delay.  
- **Manual reset:** The timer can be turned off with a single push of the button—however, after stopping, you need to re-upload the code to start a new cycle.

---

## How It Works  
1. The microcontroller receives (or is configured with) a delay time in milliseconds (`delayTime`).  
2. When you start the timer (e.g., by powering the board or running the code), the program waits for that delay.  
3. At the end of the delay, the buzzer is activated, producing a continuous (or patterned) sound.  
4. If you press the push button while the buzzer is backed on, the timer deactivates the buzzer and stops.  
5. To run the timer again, you must re-upload the code onto the microcontroller, which resets the cycle.

---

## Components  
- Microcontroller board (e.g., Arduino Uno/Nano)  
- Buzzer (piezo or similar)  
- Push button  
- Resistors (if needed for button pull-down or pull-up)  
- Power supply (battery, USB, etc.)  
- Wires and breadboard / Tinkercad virtual breadboard

---

## Code Structure  
- **`delayTime` parameter:** Set in milliseconds in the code to determine how long the timer waits.  
- **Main loop:** Waits for the delay using a blocking `delay()` or non-blocking approach (depending on your implementation).  
- **Buzzer activation:** After delay expires, the buzzer pin is set HIGH (or toggled).  
- **Button handling:** Checks if the push button is pressed; if so, the buzzer is turned OFF and the loop ends (or the microcontroller resets when you re-upload).

---

## Usage Instructions  
1. **Set the delay time** in the code (edit `delayTime` variable).  
2. **Upload** the code to your microcontroller (in Tinkercad or real hardware).  
3. **Power on** the device. The timer starts counting down.  
4. Wait until the delay period completes. The **buzzer will buzz**.  
5. To stop the buzzer, **press the push button once**.  
6. To use the timer again, **re-upload the code**, which resets the program and delay.

---

## Limitations & Considerations  
- Because the timer needs a **code re-upload** to restart, it's not very convenient for repeated cycles.  
- Using a blocking `delay()` means the microcontroller is idle during the countdown and cannot do other tasks.  
- If you want multiple timer cycles without re-uploading, you could redesign the code to reset itself after the buzzer stops.  
- No visual feedback (unless you add an LED) — only buzzer sound indicates completion.  
- Button debounce may need to be handled in software to avoid false presses.

---

## Possible Improvements  
- **Non-blocking timer:** Use `millis()` instead of `delay()` so you can perform other tasks while waiting.  
- **Auto reset:** Allow the timer to automatically reset after the buzzer finishes, so you don’t need to re-upload the code.  
- **Multiple cycles:** Support repeated delays without code re-upload.  
- **Visual indicator:** Add an LED that lights up or blinks during countdown or when the buzzer is active.  
- **User input:** Use a potentiometer, keypad, or serial input to set the delay dynamically.  
- **Memory storage:** Use EEPROM (on Arduino) to store last delay time, so the timer restarts with the same delay even after power-off.

---

## Safety & Best Practices  
- Make sure the buzzer’s voltage and current rating are compatible with your microcontroller’s output pins.  
- Use a pull-down or pull-up resistor on the button, so the input pin is stable when the button is not pressed.  
- If using a real buzzer, avoid continuous buzz that could damage your ears; use a reasonable duty cycle or duration.  
- Test the timer with short delays first to confirm behavior.  
- In a real project, add error handling or safeguards (e.g., maximum delay limit).

---

## License  
This project is under the **MIT License**. See the `LICENSE` file in this repo for details.

---

## Acknowledgements  
- Thanks to Tinkercad for providing the simulation environment.  
- Inspired by the need for simple, programmable timers for educational and hobbyist projects.

---

Thank you for checking out this Timer project! Feedback, improvements, or pull requests are welcome.  
