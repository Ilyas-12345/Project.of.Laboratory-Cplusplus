    #include <iostream>
    #include "CLoackClass.h"

    int main() {
        time_t timer=time(nullptr );
        FitnessTracker casio(2400, 100, "Casio", timer);
        time_t timer2=casio.GetTime();
        tm* timeinfo1;
        tm* timeinfo2;
        timeinfo1= localtime(&timer2);

        cout<<"==========================\n";
        cout<<casio.GetDistance()<<" meter | "<<casio.GetBatteryCharge()
        <<" % | "<<casio.GetBrand()<<" | Local time: "<<casio.GetTime()<<" or "<<asctime(timeinfo1);
        cout<<"After Setter |\n";
        casio.SetDistance(3452); casio.SetBatteryCharge(18); casio.SetBrand("Rollex"); casio.SetTime(timer);
        cout<<casio.GetDistance()<<" meter | "<<casio.GetBatteryCharge()
            <<" % | "<<casio.GetBrand()<<" | Local time: "<<casio.GetTime()<<" or "<<asctime(timeinfo1);
        cout<<"==========================\n";


        time_t time1=time(nullptr);
        timeinfo2= gmtime(&timer2);


        Watch jshock(true,"Stal'","G_shock",time1);
        cout<<"==========================\n";
        cout<<jshock.GetAutomaticWinding()<<" | "<<jshock.GetHousingMaterial()
        <<" | "<<jshock.GetBrand()<<" | Greenwich time: "<<jshock.GetTime()<<" or "<<asctime(timeinfo2);
        cout<<"After Setter |\n";
        jshock.SetAutomaticWinding(false); jshock.SetHousingMaterial("Titan"); jshock.SetBrand("Maurice Lacroix"); jshock.SetTime(timer);
        cout<<jshock.GetAutomaticWinding()<<" | "<<jshock.GetHousingMaterial()
            <<" | "<<jshock.GetBrand()<<" | Local time: "<<jshock.GetTime()<<" or "<<asctime(timeinfo1);
        cout<<"==========================\n";
    }
