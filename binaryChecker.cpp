#include <iostream>
#include <string>
using namespace std;

class binary{
    private:
        string bin;
    public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);

};

void binary :: read(){
    cout << "Enter the binary number: ";
    cin >> bin;
    }
void binary :: chk_bin(){
    for (int i = 0; i < bin.length(); i++){
        if (bin.at(i) != '0' && bin.at(i) != '1'){
            cout << "Invalid Binary Format";
            exit(0);
        } 
    }
}
void binary :: ones_compliment(void){
    chk_bin();
    for (int i = 0; i < bin.length(); i++){
        if (bin.at(i) == '1'){
            bin.at(i) = '0';
        }
        else{
            bin.at(i) = '1';
        }
    }
    cout << endl;
}
void binary :: display(void){
        cout << "Displaying your binary number" << endl;
        for (int i = 0; i < bin.length(); i++){
            cout << bin.at(i);
        }
        cout << endl;
}
    
int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}