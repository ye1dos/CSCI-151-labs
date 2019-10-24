#include <iostream>
#include "am_pm_clock.h"


int main () {
    
    std::cout<<"TEST 1. The clock initialization... \n";
    am_pm_clock the_clock;
    if (the_clock.get_hours() != 12 || the_clock.get_minutes() != 00 \
    || the_clock.get_seconds() != 00 || the_clock.is_am() != true){
        std::cout<<"FAILED. The clock could not be initialized \n";
        return 0;
    }
    std::cout<<"The clock is being initialized: "<<the_clock<<"\n";
    std::cout<<"The clock was initialized SUCCESSFULLY!\n \n";


    std::cout<<"TEST 2. The Copy Constructor is being checked to 3:43:54pm... \n";
    the_clock = {03, 43, 54, false};
    if (the_clock.get_hours() != 03 || the_clock.get_minutes() != 43 \
    || the_clock.get_seconds() != 54 || the_clock.is_am() != false){
        std::cout<<"FAILED. The clock could not copy the values \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock is initialized SUCCESSFULLY!\n \n";


    std::cout<<"TEST 3. AM_PM changer... \n";
    the_clock.toggle_am_pm();
    if (the_clock.get_hours() != 03 || the_clock.get_minutes() != 43 \
    || the_clock.get_seconds() != 54 || the_clock.is_am() != true){
        std::cout<<"FAILED. The clock could toggle AMs or PMs \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock AM_PM toggle is done SUCCESSFULLY!\n \n";


    std::cout<<"TEST 4. The clock is being resetted... \n";
    the_clock.reset();
    if (the_clock.get_hours() != 12 || the_clock.get_minutes() != 00 \
    || the_clock.get_seconds() != 00 || the_clock.is_am() != true){
        std::cout<<"FAILED. The clock could not be resetted \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock reset is being done SUCCESSFULLY!\n \n";


    std::cout<<"TEST 5. The clock is one sec advanced... \n";
    the_clock.advance_one_sec();
    if (the_clock.get_hours() != 12 || the_clock.get_minutes() != 00 \
    || the_clock.get_seconds() != 01 || the_clock.is_am() != true){
        std::cout<<"FAILED. The clock could not get one sec advanced \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock advanced by one sec SUCCESSFULLY!\n \n";


    std::cout<<"TEST 6. The clock is being advanced by 6000 seconds... \n";
    the_clock.advance_n_secs(6000);
    if (the_clock.get_hours() != 01 || the_clock.get_minutes() != 40 \
    || the_clock.get_seconds() != 01 || the_clock.is_am() != false){
        std::cout<<"FAILED. The clock could not get 6000 secs advanced \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock was advanced by 6000 seconds SUCCESSFULLY!\n \n";


    std::cout<<"TEST 7. Hours are being set to 7... \n";
    the_clock.set_hours(7);
    if (the_clock.get_hours() != 07 || the_clock.get_minutes() != 40 \
    || the_clock.get_seconds() != 01 || the_clock.is_am() != false){
        std::cout<<"FAILED. The clock could set hours to 7 \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock hours now are changed to 7 SUCCESSFULLY!\n \n";


    std::cout<<"TEST 8. Minutes are being set to 56... \n";
    the_clock.set_minutes(56);
    if (the_clock.get_hours() != 07 || the_clock.get_minutes() != 56 \
    || the_clock.get_seconds() != 01 || the_clock.is_am() != false){
        std::cout<<"FAILED. The clock could set minutes to 56 \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock minutes are changed to 56 SUCCESSFULLY!\n \n";


    std::cout<<"TEST 9. Seconds are being set to 24... \n";
    the_clock.set_seconds(24);
    if (the_clock.get_hours() != 07 || the_clock.get_minutes() != 56 \
    || the_clock.get_seconds() != 24 || the_clock.is_am() != false){
        std::cout<<"FAILED. The clock could set seconds to 24 \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock seconds are being set to 24 SUCCESSFULLY!\n \n";


    std::cout<<"TEST 10. The clock is being set to AM... \n";
    the_clock.set_am(true);
    if (the_clock.get_hours() != 07 || the_clock.get_minutes() != 56 \
    || the_clock.get_seconds() != 24 || the_clock.is_am() != true){
        std::cout<<"FAILED. The clock could set to AM \n";
        return 0;
    }
    std::cout<<"The clock now is: "<<the_clock<<"\n";
    std::cout<<"The clock is being now set to PM SUCCESSFULLY!\n \n";


    the_clock = {11, 59, 56, true};
    std::cout<<"Launching the clock till PM \n \n";
    std::cout<<"Now the clock is: "<<the_clock<<"\n \n";
    while(the_clock.is_am() != false){
        the_clock.advance_one_sec();
        std::cout<<the_clock<<"\n";
    }
    if (the_clock.get_hours() != 12 || the_clock.get_minutes() != 00 \
    || the_clock.get_seconds() != 00 || the_clock.is_am() != false){
        std::cout<<"FAILED. The clock could not be launched \n";
        return 0;
    } else {
        std::cout<<"TEST WERE COMPLETED SUCCESSFULLY. CONGRATS!!! \n";
    }
}
