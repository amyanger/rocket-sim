#include <iostream>
#include <cmath>
#include <iomanip>

// Constants
const double g = 9.81; // Gravity (m/s^2)

// Convert degrees to radians
double deg2rad(double deg) {
    return deg * M_PI / 180.0;
}

int main() {
    // Initial parameters
    double velocity, angle_deg;
    std::cout << "Enter launch velocity (m/s): ";
    std::cin >> velocity;
    std::cout << "Enter launch angle (degrees): ";
    std::cin >> angle_deg;

    // Initial position (0, 0)
    double x = 0.0, y = 0.0;
    double angle_rad = deg2rad(angle_deg);

    // Initial velocity components
    double vx = velocity * cos(angle_rad);
    double vy = velocity * sin(angle_rad);

    // Time step
    double dt = 0.1; // seconds

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTime\tX\tY\n";
    std::cout << "--------------------\n";

    double t = 0.0;

    // Simulate until the rocket lands (y <= 0)
    while (y >= 0) {
        std::cout << t << "\t" << x << "\t" << y << "\n";
        t += dt;
        x += vx * dt;
        vy -= g * dt;
        y += vy * dt;
    }

    std::cout << "\nRocket landed at X = " << x << " meters\n";

    return 0;
}