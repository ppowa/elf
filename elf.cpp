#include <iostream>

using namespace std;

class Elf{
private:
    int HP;
    int AC;
    int STR;
    int ATK;
    int DEF;
    char eyeColor;
public:
    //constructor of Elf without parameter
    Elf() {
        // complete this constructor, 
        // set HP = 100, AC = 5, STR = 10
        HP = 100;
        AC = 5;
        STR = 10;
        // set ATK = STR/10, DEF = AC/5
        ATK = STR/10;
        DEF = AC/5;
        eyeColor = 'G';
        // set eyeColor = 'G'
    }
    
    Elf(int h, int a, int s, char c) {
        // complete this constructor, 
        // set HP = h, AC = a, STR = s, eyeColor = c;
        HP = h;
        AC = a;
        STR = s;
        eyeColor = c;
        ATK = STR/10;
        DEF = AC/5;
        // set ATK = STR/10, DEF = AC/5
    }
    
    void Detail() {
        // print out HP = ??
        // print out AC = ??
        // print out STR = ??
        // print out ATK = ??
        // print out DEF = ??

        cout << "HP = " << HP << endl;
        cout << "AC = " << AC << endl;
        cout << "STR = " << STR << endl;
        cout << "ATK = " << ATK << endl;
        cout << "DEF = " << DEF << endl;

        // if eyeColor is 'G' or 'g', print out Eye color is Green
        // if eyeColor is 'P' or 'p', print out Eye color is Purple
        if (eyeColor == 'G' || 'g') {
            cout << "Eye color is Green" << endl;
        }

        else if (eyeColor == 'P' || 'p') {
            cout << "Eye color is purple" << endl;
        }
    }
};

int main(){
  // you cannot to change any thing in main()

  Elf alpha;
  Elf beta(120, 2, 5, 'p');
  Elf gamma(80, 10, 25, 'G');
  
  cout<<"alpha:"<<endl;
  alpha.Detail();
  cout<<"beta:"<<endl;
  beta.Detail();
  cout<<"gamma:"<<endl;
  gamma.Detail();
  
  return 0;
}