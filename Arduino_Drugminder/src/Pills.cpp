// In this file, the idea would be to have all the characteristics for one type of pills.
using namespace std;

//class that would include:
    // - the pill number or name 
    // - Position [ rack number ]
    // - number of pills in the machine
    // - day and time of dispensing 
    // - ... 
class Pill{
    public:
    Pill(char name, int r, int nb){
        pill_name = name;
        rack = r;
        nb_pills = nb;
    }

    void edit_pill();
    
    private:
    char pill_name = "None";
    int rack = 0 ; 
    int nb_pills = 0;

};

void Pill::edit_pill(){

};

class Prescription{
    private:
    Pill Inventory [10];


    public:
    Prescription();
    ~Prescription();

};