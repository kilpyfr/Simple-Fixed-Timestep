# Simple-Fixed-Timestep
Simple fixed C++ timestep that anybody can use. Can be used or many things such as rendering and game logic.

# How it works
Every loop, the duration of the loop is calculated and added to the accumulator. Once the accumulator is as large as or larger than the chosen deltatime, frames are added to the current frame depending on how much larger the accumulator is than the deltatime.
