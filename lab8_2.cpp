#include <iostream>

using namespace std;

int main () {

        char name[] = {"Sutamas"};
        int nameLength = 0;
        cout << name << endl;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char christ[8];

        // เขียนโปรแกรมเพื่อแสดงค่าใน arr

    // do loop execution
        for(nameLength = 0; nameLength < 7; nameLength++) {
            christ[nameLength] = name [6-nameLength]+1;
        }
        christ[7] = '\0';

        cout << christ << endl;


    return 0;
  }
Nipaporn Nakcharoen
คนคล้ำ108ท่า
