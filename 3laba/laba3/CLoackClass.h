#ifndef LABA3_CLOACKCLASS_H
#define LABA3_CLOACKCLASS_H

using namespace std;

#include "iostream"
#include <ctime>
#include <string>

class Clock{
private:
    string brand;
    time_t time;
public:
    Clock(string& ,time_t );
    ~Clock();
    string const GetBrand() const{
        return this->brand;
    }
    time_t const GetTime() const{
        return this->time;
    }
    void SetBrand(const string& obj1){
        this->brand=obj1;
    }
    void SetTime(const time_t& obj){
        this->time=obj;
    }
};

class Electronic: public Clock{
private:
    int battery_charge;
public:
    Electronic(int,string&,time_t);
    ~Electronic();
    int const GetBatteryCharge() const{
        return this->battery_charge;
    }
    void SetBatteryCharge(const int obj){
        this->battery_charge=obj;
    }
};

class Mechanic: public Clock{
private:
    string housing_material;
public:
    Mechanic(string&,string&,time_t);
    ~Mechanic();
    string const GetHousingMaterial() const {
        return this->housing_material;
    }
    void SetHousingMaterial(const string& obj){
        this->housing_material=obj;
    }
};

class Watch: public Mechanic{
private:
    bool automatic_winding;
public:
    Watch(bool,string,string,time_t);
    ~Watch();
    bool const GetAutomaticWinding() const {
        return this->automatic_winding;
    }
    void SetAutomaticWinding(bool obj){
        this->automatic_winding=obj;
    }
};

class WallClock: public Mechanic{
private:
    bool pendulum;
public:
    WallClock(bool,string,string,time_t);
    ~WallClock();
    bool const GetPendulum() const{
        return this->pendulum;
    }
    void SetPendulum(bool obj){
        this->pendulum=obj;
    }
};

class FitnessTracker: public Electronic {
private:
    int distance;
public:
    FitnessTracker(int,int,string,time_t);
    ~FitnessTracker();
    int const GetDistance() const {
        return this->distance;
    }
    void SetDistance(int obj){
        this->distance=obj;
    }
};

#endif //LABA3_CLOACKCLASS_H
