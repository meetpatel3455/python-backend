#include <iostream>
using namespace std;

class TEST {
private:
    int TestCode;
    string Description;
    int NoCandidates;
    int CenterReqd;

    void CALCNTRO() {
        CenterReqd = (NoCandidates / 100) + 1;
    }
public:
    void SCHEDULE() {
        cout << "Enter Test Code: ";
        cin >> TestCode;
        cin.ignore();
        cout << "Enter Description: ";
        getline(cin, Description);
        cout << "Enter Number of Candidates: ";
        cin >> NoCandidates;
        CALCNTRO();
    }
    void DISPTEST() const {
        cout << "Test Code: " << TestCode << endl;
        cout << "Description: " << Description << endl;
        cout << "NoCandidates: " << NoCandidates << endl;
        cout << "CenterReqd: " << CenterReqd << endl;
    }
};
int main() {
    TEST test;
    test.SCHEDULE(); 
    test.DISPTEST(); 

    return 0;
}
