#include <iostream>
#include <string>

const std::string DECIMAL_TO_CHAR = "0123456789";
const std::string LETTER_TO_DECIMAL = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char mapDecimalToChar(int decimal) {
    if (decimal < 0 || decimal > 35) {
        return '?'; // ����һ���Ƿ��ַ���������벻��0��35֮��
    }
    return LETTER_TO_DECIMAL[decimal]; // ӳ�䵽��Ӧ�Ĵ�д��ĸ
}

int main() {
    int decimalNumber;
    std::cout << "������һ����λ����ʮ������ (0-35): ";
    std::cin >> decimalNumber;

    char mappedChar = mapDecimalToChar(decimalNumber);
    if (mappedChar != '?') {
        std::cout << "ӳ��Ĵ�д��ĸ��: " << mappedChar << std::endl;
    } else {
        std::cout << "��������ֲ�����Ч�ķ�Χ�ڡ�" << std::endl;
    }

    return 0;
}