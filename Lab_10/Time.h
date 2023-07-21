#ifndef TIME_H
#define TIME_H

class Time {
    
    int hours, minutes, seconds;
    
    public:
        // default constructor
        Time() {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        // custom constructor
        Time(int hours, int minutes, int seconds) {
            setHours(hours);
            setMinutes(minutes);
            setSeconds(seconds);
        }

        // destructor
        ~Time() {}

        // getter function for hours
        int getHours() const {
            return hours;
        }

        // getter function for minutes
        int getMinutes() const {
            return minutes;
        }

        // getter function for seconds
        int getSeconds() const {
            return seconds;
        }

        // setter function for hours
        void setHours(int hours) {
            this->hours = hours;
        }

        // setter function for minutes
        void setMinutes(int minutes) {
            this->minutes = minutes;
        }

        // setter function for seconds
        void setSeconds(int seconds) {
            this->seconds = seconds;
        }

        // print function
        void print() const {
            std::cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
        }

        // overload increment operator prefix
        Time& operator++() {
            this->hours++;
            return *this;
        }
        // overload increment operator postfix
        Time operator++(int) {
            Time temp;
            temp.hours = this->hours;
            temp.minutes = this->minutes;
            temp.seconds = this->seconds;
            this->hours++;
            return temp;
        }
};        

// overload + operator
// const parameters because we're not changing their member values
Time operator+(const Time& t1, const Time& t2) {
    Time sum;
    int temp;

    temp = t1.getSeconds() + t2.getSeconds();
    // if sum of seconds is larger than or equal to 60 secs, add a minute and set sum.seconds to difference 
    if (temp >= 60) {
        // include sum.minutes for existing minutes
        sum.setMinutes(sum.getMinutes() + (temp / 60));
        sum.setSeconds(temp % 60);
    }
    else {
        sum.setSeconds(temp);
    }

    temp = t1.getMinutes() + t2.getMinutes();
    // if sum of minutes is larger than or equal to 60 mins, add a hour and set sum.minutes to difference 
    if (temp >= 60) {
        // include sum.hours for existing hours
        sum.setHours(sum.getHours() + (temp / 60));
        // include sum.minutes in the addition in case there were minutes from extra seconds
        sum.setMinutes(sum.getMinutes() + (temp % 60));
    }
    else {
        sum.setMinutes(temp);
    }

    // include sum.hours in the addition in case there were hours from extra minutes
    sum.setHours(sum.getHours() + (t1.getHours() + t2.getHours()));

    // once we reach 24 hours, the hours reset to 0
    if (sum.getHours() == 24) {
        sum.setHours(0);
    }

    return sum;
}

#endif