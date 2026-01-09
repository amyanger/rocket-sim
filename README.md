# Rocket Trajectory Simulator

A simple C++ physics simulation for calculating rocket trajectories using projectile motion equations.

## Features

- Interactive velocity and angle input
- Real-time trajectory calculation
- Outputs position data at each time step
- Calculates final landing position

## Physics Model

Uses basic projectile motion equations:
- Horizontal: `x = v₀ cos(θ) × t`
- Vertical: `y = v₀ sin(θ) × t - ½gt²`

## Building

```bash
g++ -o rocket main.cpp -lm
```

## Usage

```bash
./rocket
```

Enter your desired launch velocity (m/s) and angle (degrees) when prompted.

## Example Output

```
Enter launch velocity (m/s): 50
Enter launch angle (degrees): 45

Time    X       Y
--------------------
0.00    0.00    0.00
0.10    3.54    3.44
...
Rocket landed at X = 255.10 meters
```

## Author

Arjun Myanger

## License

MIT License
