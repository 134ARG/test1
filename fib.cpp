#include "mainwindow.h"
#include <thread>
#include <chrono>


void fibx(MainWindow *win, int target_index){
    unsigned long long former =0;
    unsigned long long temp = 0;
    unsigned long long current = 1;

    for(int i = 1; i <= target_index; i++){
        if(i == 1){}
        else {
            temp = current;
            current += former;
            former = temp;
        }

        win->display_number(current);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}
