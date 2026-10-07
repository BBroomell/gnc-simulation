#include <iostream>

int main()
{
    std::cout << "GNC Simulation Starting...\n\n";

    //Initial vehicle state
    double position = 0.0;  //meters
    double velocity = 0.0;  //meters/second

    //Constant acceleration
    double acceleration = 10.0;  //meters/second^2

    //Simulation timing
    double time = 0.0;  //seconds
    double dt = 0.1;  //timestamp in seconds
    double endTime = 5.0;  //seconds

    for (int i = 0;i < 50; i++ ) 
    {
        
        position = position + velocity * dt
            + 0.5 * acceleration * dt * dt;
        velocity = velocity + acceleration * dt;

        time = time + dt;

        std::cout
            << "Time " << time
            << " s | Position: " << position
            << " m | Velocity: " << velocity
            << " m/s\n";
    }


    return 0;
}