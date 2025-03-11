#include <iostream>
using namespace std;
int main()
{
    float LS, LM, LH, LD, LW, LY;
    LS = 299792458;
    LM = LS/60;
    LH = LM/60;
    LD = LH/24;
    LW = LD/7;
    LY = LW/36;
    cout << "Light-second(LS):"  << LS << endl;
	cout << "Light-minute(LM):" << LM << endl;
	cout << "Light-hour(LH):" << LH << endl;
	cout << "Light-day(LD):" << LD << endl;
	cout << "Light-week(LW):" << LW << endl;
	cout << "Light-year(LY):" << LY << endl;
}
