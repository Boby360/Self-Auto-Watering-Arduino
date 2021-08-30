# Arduino
  - Power consumption will vary depending on the version of arduino, as well as who makes it.
  - The long chip on the bottom(expand on this later) often dictates the power consumption between the same model.
  - As the goal is to acheive the lowest possible power consumption, an official version is suggested.
  - I have a few different chinese clones, and used the most efficient one.
  - Idling at 0.009a with nothing plugged in and low power mode code enabled.


# Relays
## Passive consumption
  - Mechanical
    - 0.009a @ 12.13V
  - Sold-state
    - 0.000a @ 12.14V
  - Mosfet
    - 0.000a @ 12.16V
 
 This shows that a mechanical will waste power while the system is idling while Solid-state and Mosfet consume practically nothing.
 
 
## Triggered consumption
  - Mechanical
    - 0.185a @ 11.95V - Would not trigger when powered with 5V
  - Sold-state
    - 0.028a @ 12.11V - 0.009 @ 5.1V
  - Mosfet
    - 0.004a @ 12.14V - 0.008 @ 5.1V
  
This shows that the mechanical consumes more than solid-state and mosfet while triggered and does not trigger with a 5V power source.

## No load triggered resistance
  - Solid-state
    - 1095 Ohm /w 5V power and 5V trigger
  - Mosfet
    - 5.5 Ohm /w 5V power and 5V trigger
    
This shows very low resistance with the mosfet while no load is applied.

Mosfet should be the ideal candidate.

# Moisture Sensor
  - FC-28
    - 0.004a @ 5.1V no trigger
    - 0.008a @ 5.1V digital trigger
    - Need to verify analog trigger consumption
