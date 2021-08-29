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
  
This shows that the mechanical consumes more than solid-state and mosfet while triggered and does not work trigger with a 5V power source.

## No load triggered resistance
  - Solid-state
    - 1095 Ohm /w 5V power and 5V trigger
  - Mosfet
    - 5.5 Ohm /w 5V power and 5V trigger
    
This shows very low resistance with the mosfet while no load is applied.

Mosfet should be the ideal candidate.