#include <iostream>
using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion) {
    *p_HPPotion = count;
    *p_MPPotion = count;
}

int main()
{
    const int SIZE = 4;
    int stat[SIZE] = { 0 };

    while (1) {
        cout << "HP�� MP�� �Է����ּ���: ";
        cin >> stat[0] >> stat[1];

        if (stat[0] > 50 && stat[1] > 50) {
            break;
        }
        cout << "HP�� MP�� ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���." << endl;
    }

    while (1) {
        cout << "���ݷ°� ������ �Է����ּ���: ";
        cin >> stat[2] >> stat[3];

        if (stat[2] > 0 && stat[3] > 0) {
            break;
        }
        cout << "���ݷ��̳� ������ ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���." << endl;
    }

    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;

    setPotion(5, &HPPotion, &MPPotion);

    cout << "* ������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��)" << endl;
    cout << "=============================================" << endl;
    cout << "<���� ���� �ý���>" << endl;
    cout << "<1. HP ȸ��>" << endl;
    cout << "<2. MP ȸ��>" << endl;
    cout << "<3. HP ��ȭ>" << endl;
    cout << "<4. MP ��ȭ>" << endl;
    cout << "<5. ���ݽ�ų���>" << endl;
    cout << "<6. �ʻ����>" << endl;
    cout << "<7. ������>" << endl;
    // ... (�޴� ���)

    while (1) {
        cout << "��ȣ�� �������ּ���: ";
        cin >> choice;

        if (choice == 7) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;
        }

        switch (choice) {
        case 1:
            if (HPPotion <= 0) {
                cout << "������ �����մϴ�." << endl;
                continue;
            }
            stat[0] += 20;
            HPPotion = --HPPotion;
            cout << "* HP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl;
            cout << "���� HP: " << stat[0] << endl;
            cout << "���� ���� ��: " << HPPotion << endl;
            break;
            // ... (�ٸ� case��)
            /* ��ĭ 11: ������ case ���� ��� ��� */

        case 2:
            if (MPPotion <= 0) {
                cout << "������ �����մϴ�." << endl;
                continue;
            }
            stat[1] += 20;
            MPPotion = --MPPotion;
            cout << "* MP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl;
            cout << "���� MP: " << stat[1] << endl;
            cout << "���� ���� ��: " << MPPotion << endl;
            break;

        case 3:
            stat[0] = stat[0] * 2;
            cout << "HP�� ��ȭ�Ǿ����ϴ�." << endl;
            cout << "���� HP: " << stat[0] << endl;
            break;

        case 4:
            stat[1] = stat[1] * 2;
            cout << "MP�� ��ȭ�Ǿ����ϴ�." << endl;
            cout << "���� MP: " << stat[1] << endl;
            break;

        case 5:
            stat[1] = stat[1] - 50;
            cout << "��ų�� ����Ͽ� MP�� 50 �Ҹ�Ǿ����ϴ�." << endl;
            cout << "���� MP: " << stat[1] << endl;
            break;

        case 6:
            stat[1] = stat[1] / 2;
            cout << "�ʻ�⸦ ����Ͽ� MP�� 50% �Ҹ�Ǿ����ϴ�." << endl;
            cout << "���� MP: " << stat[1] << endl;
            break;

        default:
            cout << "�ٽ� �Է����ּ���." << endl;
            break;
        }
    }
    return 0;
}