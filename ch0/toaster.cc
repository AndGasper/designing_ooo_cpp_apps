class Heater {
    public:
        virtual void TurnOn() = 0;
        virtual void TurnOff() = 0;
};

class Timer {
    public:
        virtual void SetTime(int) = 0;
        virtual int IsRunning() const = 0;
};

class Carriage {
    public:
        virtual int IsDown() const = 0; // derived class while override this, but maybe not with the const (?)
        virtual void PopUp() = 0; 
};

class Toaster {
    public:
        Toaster(Timer& t, Carriage& c, Heater& h);
        void Run();
    private:
        Timer& itsTimer;
        Carriage& itsCarriage;
        Heater& itsHeater;
};

void Toaster::Run() {
    // The horror!
    for (;;) {
        // The book's syntax is a little confusing. Trying not to write an infinite loop here
        while(!itsCarriage.IsDown()) {
            itsHeater.TurnOn();
            itsTimer.SetTime(120); // t in seconds
        }
        while(itsCarriage.IsDown() && itsTimer.IsRunning()) {
            itsCarriage.PopUp();
            itsHeater.TurnOff();
        }
    }
}



class someTimer: public Timer {
    void setTime() {
        return;
    }
    int IsRunning() {
        return 0;
    }
};
class someCarriage: public Carriage {
    
};
class someHeater: public Heater {
    public:
        void TurnOn() {
            return;
        }
        void TurnOff() {
            return;
        }
};



void main() {

    class t(Timer someTimer, Carriage someCarriage, Heater someHeater): public Toaster {
        return;
    }z
    t.Run();
}