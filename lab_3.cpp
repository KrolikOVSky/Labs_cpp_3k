#include <iostream>
using namespace std;

class Record {
public:
    int key = -1;
    float data = -1;
    int index = -1;
};

class Table {
public:
    Record firstRecordArray[5];
    Record secondRecordArray[5];
    int countFirstArray = 0;
    int countSecondArray = 0;

    void insert(int key, float data) {
        Record record;
        record.key = key;
        record.data = data;
        if (this->firstRecordArray[record.key % 10].key != -1) {
            if (this->firstRecordArray[record.key % 10].index == -1) {
                this->firstRecordArray[record.key % 10].index = this->countSecondArray;
                this->secondRecordArray[countSecondArray] = record;
                this->countSecondArray++;
            } else {
                int ind = this->firstRecordArray[record.key % 10].index;
                while (this->secondRecordArray[ind].key != -1) {
                    if (this->secondRecordArray[ind].index == -1) {
                        this->secondRecordArray[ind].index = this->countSecondArray;
                        this->secondRecordArray[countSecondArray] = record;
                        this->countSecondArray++;
                        break;
                    } else ind = this->secondRecordArray[ind].index;
                }
            }

        } else {
            this->firstRecordArray[record.key % 10] = record;
            countFirstArray++;
        }

    }

    float search(int key) {
        if (this->firstRecordArray[key % 10].key == key) return this->firstRecordArray[key % 10].data;
        else {
            if (this->firstRecordArray[key % 10].index == -1) return -1;
            else {
                int currentIndex = this->firstRecordArray[key % 10].index;
                if (this->secondRecordArray[currentIndex].key == key) return this->secondRecordArray[currentIndex].data;
                else {
                    while (this->secondRecordArray[currentIndex].key != key) {
                        if (this->secondRecordArray[currentIndex].key == -1) return -1;
                        currentIndex = this->secondRecordArray[currentIndex].index;
                    }
                    return this->secondRecordArray[currentIndex].data;
                }
            }
        }
    }

    void print() {
        int count1 = 0;
        int count2 = 0;
        cout << "Table 1" << endl;
        while (count1 < 5) {
            cout << "index " << count1 << "key:" << this->firstRecordArray[count1].key << " data: " << this->firstRecordArray[count1].data << endl;
            count1++;
        }
        cout << endl;
        cout << "Table 2" << endl;
        while (count2 < 5) {
            cout << "index" << count2 << "key:" << this->secondRecordArray[count2].key << " data: " << this->secondRecordArray[count2].data << endl;
            count2++;
        }
    }
};

int main() {
    Table table;
    int action;
    int key;
    float data;
    while (true) {
        cout << "Enter from 1 to 4 " << endl << "1 - Add record to table" << endl << "2 - Search by key" << endl
             << "3 - Table status" << endl << "4 - Exit" << endl;
        cout << "Value: " << "";
        cin >> action;
        switch (action) {
            case (1):
                cout << "Enter key ";
                cin >> key;
                cout << endl;
                cout << "Enter data ";
                cin >> data;
                cout << endl;
                table.insert(key, data);
                continue;
            case (2):
                cout << "Enter key for searching ";
                cin >> key;
                cout << endl;
                cout << table.search(key) << endl;
                continue;
            case (3):
                table.print();
                continue;
            case (4):
                break;
            default: cout << "Try again" << endl;
        }
        break;
    }
    return 0;
}