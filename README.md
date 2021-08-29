![Build](https://github.com/Boby360/Self-Auto-Watering-Arduino/actions/workflows/superlinter.yml/badge.svg)
# Self-sustained Automated Watering Arduino system
The goal for this project is to have a self-sustained and automated watering system using an Arduino Nano.
This involves having a heavily optimized automated watering system for minimal power consumption so it can be used in combination with renewable power generation, such as solar or wind.

## Purpose
To have a completely self-sustained automated watering system so you never need to water your plants.

## How does it work
An automated arduino watering system will monitor the moisture in a planter pot. When the moisture gets below a set level, the water pump will be triggerd. This will pump use collected rain water in a jug (or manually filled). A tube from the planter pot can be used to collect exess water if filters are in place. The system will be powered via a battery pack that is recharged via solar and/or wind generators.

## What is required:
- [Arduino Nano](https://store-usa.arduino.cc/products/arduino-nano?selectedStore=us)
- Moisture sensors (FC-28 works, others may work as well)
- Water pumps (Any 5v will do, although note the OD for hose)
- Water hose
- Battery pack that has passthrough charging (Soshine e4s is one, although uses 18650 cells)
- Arduino supported Relay (5v GPIO) (See [power-consumption.md](https://github.com/Boby360/Self-Auto-Watering-Arduino/blob/main/power-consumption.md) for suggestions)
- Solar and/or wind generation (Something that is native 5V and not stepped down)



## Todo:
Test the performance for a full year to figure out the shortfalls.
