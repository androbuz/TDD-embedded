# TDD Embedded Experiments

Welcome to the **TDD Embedded Experiments** repository! This repo is all about exploring Test Driven Development (TDD) in the world of embedded systems. I'll walk you through an example project where we control an LED with a button on an Arduino, all done in a bare-metal style.

## What You'll Find Here

### Project Overview

This project is a simple yet powerful demonstration of TDD in embedded systems. The main goal is to turn on an LED when a button is pressed and turn it off when the button is released. Here's a quick breakdown:

- **Bare-Metal Style**: No fancy libraries, just raw manipulation of registers.
- **Simulation First**: Before running it on actual hardware, I simulated the project on my PC.
- **Mocks for Testing**: I used mock objects to simulate Arduino register port addresses.
- **Unity Testing Framework**: The whole project was tested using the Unity testing framework for C.

### How It Works

1. **Simulating on PC**:

    - I created mock objects to mimic the Arduino's register addresses.
    - Manipulated these mock objects to simulate the hardware behavior.
    - Wrote tests in a TDD fashion to ensure everything worked as expected.

2. **Transferring to Arduino**:

    - Once the simulation was successful, I made minimal changes.
    - Switched out the mock addresses for the real Arduino register addresses.
    - Uploaded the code to an Arduino Uno.
    - And voila! It worked instantly on the hardware.

## Tools Used

- **Arduino Uno**: Our trusty hardware platform.
- **Unity Testing Framework**: For writing and running our tests.
- **Mock Objects**: To simulate hardware registers during development.

## Conclusion

This experiment has been a fruitful dive into TDD for embedded systems. If you're looking to improve your development workflow for embedded projects, give TDD a try.

### Links:
- <a href="https://wokwi.com/projects/420336572513593345">Simple button controlled LED</a>

