 #include <iostream>
using namespace std;

int main() {
    int roadOne, roadTwo, roadThree, roadFour; 
    int roundabout, stopsigns, trafficlights;
    
    cout << "Cars-Per-Minute (CPM) rate for Road 1 \n"; // Type a number and press enter
    cin >> roadOne; // Get user input from the keyboard
    cout << "Cars-Per-Minute (CPM) rate for Road 2 \n"; // Display the input value
    cin >> roadTwo;
    cout << "Cars-Per-Minute (CPM) rate for Road 3 \n"; // Type a number and press enter
    cin >> roadThree; 
    cout << "Cars-Per-Minute (CPM) rate for Road 4 \n"; // Type a number and press enter
    cin >> roadFour; 

    int TotalCpm = roadOne + roadTwo + roadThree + roadFour;

    if(TotalCpm >= 20 ){
        roundabout = 50;
        stopsigns = 20;
        trafficlights = 90;

    } else if(20 > TotalCpm && TotalCpm >= 10){
        roundabout = 75;
        stopsigns = 30;
        trafficlights = 75;

    } else if(TotalCpm < 10){
        roundabout = 90;
        stopsigns = 40;
        trafficlights = 30;
    }

    if(roundabout > stopsigns && roundabout > trafficlights){
        cout << "roundabout";
    } else if( roundabout == trafficlights){
        cout << "roundabout or trafficlights";
    } else if(stopsigns > trafficlights){
        cout << "stopsigns";
    } else{
        cout << "trafficlights";
    }
    return 0;
} 