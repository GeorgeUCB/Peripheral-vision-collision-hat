# Peripheral Vision Haptic Hat

This project was inspired by my dad, who suffers from severe degradation of his peripheral vision (tunnel vision) and faces many challenges navigating busy areas. Due to his limited field of view, he often bumps into people and objects, causing frustration for both him and those around him.

## Objective

The primary goal of this project is to enhance situational awareness for those with limited peripheral vision by replacing visual feedback with haptic feedback. We aim to achieve this by utilizing multifrequency vibrators placed along the rim of a hat, working in conjunction with ultrasonic sensors and an Arduino board to convey the location of nearby obstacles.

## Current Implementation

The current implementation features a single HC-SR04 ultrasonic sensor and an Arduino Uno. The system is designed to vibrate when an object comes within 5 centimeters, thereby alerting the wearer to the presence of nearby obstacles. This simple setup provides a basic level of assistance to help users avoid immediate obstacles.

### Components

- HC-SR04 Ultrasonic Sensor
- Arduino Uno
- Multifrequency Vibrator
- Hat (for attaching components)

## Future Plans

We have several improvements in mind for future iterations of the Peripheral Vision Haptic Hat:

- Incorporating multiple ultrasonic sensors to create a more comprehensive understanding of the wearer's surroundings
- Implementing an advanced haptic feedback system that accurately conveys distance and direction
- Developing a sophisticated algorithm to filter out less relevant obstacles, prioritizing the most important ones
- Enhancing the overall design and comfort of the hat for everyday use

## Contributing

We encourage contributions to this project in various forms, such as improvements to the code, suggestions for additional features, or assistance with hardware development. Feel free to open an issue or submit a pull request.
