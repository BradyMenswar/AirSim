#include <iostream>
#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"

using namespace std;
using namespace msr::airlib;

int main() {
    MultirotorRpcLibClient client;
    client.enableApiControl(true);
    client.armDisarm(true);
    client.takeoffAsync(5)->waitOnLastTask();

    client.moveByVelocityAsync(0, 0, -3, 1)->waitOnLastTask();

    //std::cin.get();

    ////To the left
    //client.moveByVelocityAsync(0, -2, 0, 1)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.75)->waitOnLastTask();

    ////Take it back now yall
    //client.moveByVelocityAsync(-2, 0, 0, 1)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 1)->waitOnLastTask();

    ////One hop this time
    //client.moveByVelocityAsync(0, 0, -1, 0.5)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 1, 0.5)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.75)->waitOnLastTask();

    ////Right foot lets stomp
    //client.moveByAngleRatesZAsync(M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 1.75)->waitOnLastTask();

    ////Left foot lets stomp
    //client.moveByAngleRatesZAsync(-M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 1.5)->waitOnLastTask();

    ////ChaCha 
    //client.moveByAngleRatesZAsync(M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.5)->waitOnLastTask();
    //client.moveByVelocityAsync(2, 0, 0, 0.25)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    //client.moveByAngleRatesZAsync(-M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    //client.moveByVelocityAsync(-2, 0, 0, 0.5)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();


    //client.moveByAngleRatesZAsync(M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.5)->waitOnLastTask();
    //client.moveByVelocityAsync(2, 0, 0, 0.25)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    //client.moveByAngleRatesZAsync(-M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    //client.moveByVelocityAsync(-2, 0, 0, 0.5)->waitOnLastTask();
    //client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();

    std::cout << "Part 2: ";
    std::cin.get();

    //To the right now
    client.moveByVelocityAsync(0, 2, 0, 1)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.5)->waitOnLastTask();

    //To the left
    client.moveByVelocityAsync(0, -2, 0, 1)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.75)->waitOnLastTask();

    //Take it back now yall
    client.moveByVelocityAsync(-2, 0, 0, 1)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 1)->waitOnLastTask();

    //One hop this time
    client.moveByVelocityAsync(0, 0, -1, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 1, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.75)->waitOnLastTask();

    //One hop this time
    client.moveByVelocityAsync(0, 0, -1, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 1, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.75)->waitOnLastTask();

    //Right foot two stomps
    client.moveByAngleRatesZAsync(M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByAngleRatesZAsync(M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 1.25)->waitOnLastTask();

     //Left foot two stomps
    client.moveByAngleRatesZAsync(-M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByAngleRatesZAsync(-M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.75)->waitOnLastTask();

    //Slide to the left
    client.moveByVelocityAsync(0, -2, 0, 1.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.5)->waitOnLastTask();

    //Slide to the right
    client.moveByVelocityAsync(0, 2, 0, 1.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.75)->waitOnLastTask();

    //Criss-cross
    client.moveByAngleRatesZAsync(16* M_PI, 0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 1.25)->waitOnLastTask();

    //Criss-cross
    client.moveByAngleRatesZAsync(16 * M_PI, 0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 1.75)->waitOnLastTask();

     //ChaCha
    client.moveByAngleRatesZAsync(M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(2, 0, 0, 0.25)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByAngleRatesZAsync(-M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByVelocityAsync(-2, 0, 0, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();

    client.moveByAngleRatesZAsync(M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(2, 0, 0, 0.25)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByAngleRatesZAsync(-M_PI, 0, 0, 0, 0.125)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();
    client.moveByVelocityAsync(-2, 0, 0, 0.5)->waitOnLastTask();
    client.moveByVelocityAsync(0, 0, 0, 0.25)->waitOnLastTask();

    return 0;
}