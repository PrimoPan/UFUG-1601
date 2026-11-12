#include "../common/common.h"

using namespace std;

using namespace std;

class MakeInputForSTART01 : public MakeInput {
    void ptf1(int a){fprintf(File,"%d\n",a);}
    void ptf2(int a,int b){fprintf(File, "%d %d\n", a, b);}
    void ptf3(int a){fprintf(File,"%d ",a);}
    void hc(){fprintf(File,"\n");}
    void make(int no) {
        switch (no) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9: {
                int t = Random() % 100000;
                fprintf(File, "%d\n", t);
                break;
            }
        }
    }
};

int main() {
    MakeInputForSTART01().makeAll(10);
    return 0;
}


