#ifndef TIMER_H
#define TIMER_H

class Timer {
private:
    int remainingTime;
    int duration;

public:
    Timer(int duration);

    void start();                // Inicia el temporizador
    void stop();                 // Detiene el temporizador
    int getRemainingTime();      // Devuelve el tiempo restante
};

#endif
