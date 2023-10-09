#include "CLoackClass.h"

Clock::Clock(string& brand, time_t time) {
    this->brand=brand;
    this->time=time;
    cout<<"Clock created"<<endl;
}

Electronic::Electronic(int battery_charge,string& brand,time_t timer) :Clock(brand,timer){
    this->battery_charge=battery_charge;
    cout<<"Electronic created"<<endl;
}

Mechanic::Mechanic(string& material,string& brand,time_t timer): Clock(brand,timer) {
    this->housing_material=material;
    cout<<"Mechanic created"<<endl;
}

FitnessTracker::FitnessTracker(int distance, int charge, string brand,time_t timer): Electronic(charge,brand,timer){
    this->distance=distance;
    cout<<"FitnessTracker created"<<endl;
}

Watch::Watch(bool automatic_winding,string housing_material,string brand,time_t timer):Mechanic(housing_material,brand,timer){
    this->automatic_winding=automatic_winding;
    cout<<"Watch created"<<endl;
}

WallClock::WallClock(bool pendulum,string housing_material,string brand,time_t timer): Mechanic(housing_material,brand,timer){
    this->pendulum=pendulum;
    cout<<"Wall clock created"<<endl;
}

Clock::~Clock() {
    cout<<"Clock deleted\n";
}

Electronic::~Electronic() {
    cout<<"Electronic deleted\n";
}

Mechanic::~Mechanic() {
    cout<<"Mechanic deleted\n";
}

FitnessTracker::~FitnessTracker() {
    cout<<"FitnessTracker deleted\n";
}

Watch::~Watch() {
    cout<<"Watch deleted\n";
}

WallClock::~WallClock() {
    cout<<"WallClock deleted\n";
}
