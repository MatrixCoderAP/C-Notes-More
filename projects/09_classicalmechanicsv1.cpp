#include <iostream>
#include <cmath>

int main() {

std::cout << "Welcome to the Newtonian / Classical Mechanics Formula Calculator!" << '\n';
std::cout << "This calculator covers several major formulas used in basic classical mechanics." << '\n';
std::cout << "You can use it to calculate force, weight, momentum, energy, work, and projectile motion values." << '\n';
std::cout << '\n';

std::cout << "Formula Menu:" << '\n';
std::cout << "1. Force: F = ma" << '\n';
std::cout << "   Force is the push or pull on an object. It depends on mass and acceleration." << '\n';
std::cout << '\n';

std::cout << "2. Weight: Fg = mg" << '\n';
std::cout << "   Weight is the gravitational force acting on an object." << '\n';
std::cout << '\n';

std::cout << "3. Momentum: p = mv" << '\n';
std::cout << "   Momentum measures how much motion an object has. It depends on mass and velocity." << '\n';
std::cout << '\n';

std::cout << "4. Kinetic Energy: KE = 1/2 mv^2" << '\n';
std::cout << "   Kinetic energy is the energy an object has because it is moving." << '\n';
std::cout << '\n';

std::cout << "5. Potential Energy: PE = mgh" << '\n';
std::cout << "   Gravitational potential energy is stored energy due to height." << '\n';
std::cout << '\n';

std::cout << "6. Work: W = Fd cos(theta)" << '\n';
std::cout << "   Work is energy transferred when a force moves an object over a distance." << '\n';
std::cout << '\n';

std::cout << "7. Projectile Time: t = 2vy / g" << '\n';
std::cout << "   Projectile time estimates how long an object stays in the air when it lands at the same height it was launched from." << '\n';
std::cout << '\n';

std::cout << "8. Projectile Range: R = vx * t" << '\n';
std::cout << "   Projectile range is the horizontal distance traveled by a projectile." << '\n';
std::cout << '\n';

std::cout << "9. Exit" << '\n';
std::cout << '\n';

std::cout << "Please choose the formula you would like to use by typing its assigned number below: (ex. 1 for Force)";
std::cout << '\n';

int choice;
std::cin >> choice;

if (choice == 1) {
    double mass;
    double acceleration;
    double force;

    std::cout << "Enter mass in kilograms: ";
    std::cin >> mass;

    std::cout << "Enter acceleration in meters per second squared (put number): ";
    std::cin >> acceleration;

    force = mass * acceleration;

    std::cout << "Your force is: " << force << " Newtons" << '\n';
    return 0;
}
else if (choice == 2) {
    double mass;
    double gravity;
    double weight;

    std::cout << "Enter mass in kilograms: ";
    std::cin >> mass;

    std::cout << "Enter gravity in meters/second^2 (put number): ";
    std::cin >> gravity;

    weight = mass * gravity;
    std::cout << "Your weight was calculated at: " << weight << " Newtons" << '\n';
    return 0;
}
else if (choice == 3) {
    double mass;
    double velocity;
    double momentum;

    std::cout << "Enter mass in kilograms: ";
    std::cin >> mass;
    
    std::cout << "Enter velocity in meters/second (put number): ";
    std::cin >> velocity;

    momentum = mass * velocity;
    std::cout << "Your momentum was calculated at: " << momentum << " kilogram meters/sec";
    return 0;
}
else if (choice == 4) {
    double mass;
    double velocity;
    double kineticEnergy;

    std::cout << "Enter mass in kilograms: ";
    std::cin >> mass;

    std::cout << "Enter velocity in meters/second (put number): ";
    std::cin >> velocity;
    
    kineticEnergy = 0.5 * mass * velocity * velocity;
    std::cout << "Your kinetic energy was calculated at: " << kineticEnergy << " Joules";
    return 0;
}
else if (choice == 5) {
    double mass;
    double gravity;
    double height;
    double potentialEnergy;

    std::cout << "Enter mass in kilograms: ";
    std::cin >> mass;

    std::cout << "Enter gravity in meters/second^2 (put number): ";
    std::cin >> gravity;

    std::cout << "Enter height in meters above the ground: ";
    std::cin >> height;

    potentialEnergy = mass * gravity * height;
    std::cout << "Your potential energy was calculated at: " << potentialEnergy << " Joules";
    return 0;
}
else if (choice == 6) {
    double force;
    double distance;
    double degrees;
    double work;
    const double PI = 3.1415926535;

    std::cout << "Enter force in Newtons: ";
    std::cin >> force;

    std::cout << "Enter distance traveled in meters: ";
    std::cin >> distance;

    std::cout << "Enter angle (in degrees, enter 0 if pushed flat): ";
    std::cin >> degrees;

    double radians = degrees * (PI / 180.0);
    work = force * distance * cos(radians);
    std::cout << "Your work was calculated at: " << work << " Joules";
    return 0;
}
else if (choice == 7) {
    double verticalVelocity;
    double gravity;
    double projectileTime;

    std::cout << "Enter vertical velocity in meters per second (put number): ";
    std::cin >> verticalVelocity;

    std::cout << "Enter gravity in meters per second squared (put number): ";
    std::cin >> gravity;

    projectileTime = (2 * verticalVelocity) / gravity;

    std::cout << "Your projectile time is: " << projectileTime << " seconds" << '\n';

    return 0;
}
else if (choice == 8) {
    double horizontalVelocity;
    double projectileTime;
    double projectileRange;
    
    std::cout << "Enter horizontal velocity in meters/second (put number): ";
    std::cin >> horizontalVelocity;

    std::cout << "Enter projectile time in seconds: ";
    std::cin >> projectileTime;

    projectileRange = horizontalVelocity * projectileTime;
    std::cout << "Your projectile's distance travel was calculated at: " << projectileRange << " meters";
    return 0;
}
else if (choice == 9) {
    std::cout << "Thanks for using the classical mechanics calculator v1! This is just a prototype. Better versions will be out in the future!";
    return 0;
}
else {
    std::cout << "Invalid choice. Please try again.";
    return 0;
}

    return 0;
}

