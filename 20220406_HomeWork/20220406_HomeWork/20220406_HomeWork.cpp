#include <iostream>
#include <string>
using namespace std;

int main()
{
    //나의 대한 정보를 데이터 타입에 맞춰 20가지 출력하기
    string name = "이재혁"; // 이름
    char sex = 'M'; // 성별
    string address = "일산"; // 사는 곳
    int age = 24; // 나이
    int height = 178; // 키
    string favorite_food = "닭강정"; // 좋아하는 음식
    string disliked_food = "오이"; // 싫어하는 음식
    string hobby = "피아노"; // 취미
    int foot_size = 275; // 발 사이즈
    string mbti = "INFP"; // MBTI
    int family_count = 4; // 가족구성원 수
    string email_address = "leehuk0622@gmail.com"; // 이메일 주소
    string phone_number = "010-7508-0624"; // 휴대폰 번호
    string dog_name = "랑이"; // 강아지 이름
    string want_to_do = "여행"; // 하고싶은 것
    int minute_time = 90; // 통학시간(분)
    float hour_time = 1.5f; // 통학시간(시)
    int transfer_count = 2; // 통학 시 갈아타는 횟수
    int wakeup_time = 6; // 기상시간
    string achieve = "취업"; // 목표

    cout << "이름 : " << name << endl;
    cout << "성별 : " << sex << endl;
    cout << "사는 곳 : " << address << endl;
    cout << "나이 : " << age << "살" << endl;
    cout << "키 : " << height << "cm" << endl;
    cout << "좋아하는 음식 : " << favorite_food << endl;
    cout << "싫어하는 음식 : " << disliked_food << endl;
    cout << "취미 : " << hobby << endl;
    cout << "발 사이즈 : " << foot_size << "mm" << endl;
    cout << "MBTI : " << mbti << endl;
    cout << "가족구성원 수 : " << family_count << "명" << endl;
    cout << "이메일 주소 : " << email_address << endl;
    cout << "휴대폰 번호 : " << phone_number << endl;
    cout << "강아지 이름 : " << dog_name << endl;
    cout << "하고싶은 것 : " << want_to_do << endl;
    cout << "통학시간(분) : " << minute_time << "분" << endl;
    cout << "통학시간(시) : " << hour_time << "시간" << endl;
    cout << "통학 시 갈아타는 횟수 : " << transfer_count << "번" << endl;
    cout << "기상시간 : " << wakeup_time << "시" << endl;
    cout << "목표 : " << achieve << endl;

}