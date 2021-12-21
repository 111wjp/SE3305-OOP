#ifndef PEOPLE_INFOR_H
#define PEOPLE_INFOR_H
#include <string>
using namespace std;
class people_infor
{
public:
    void get_infor();
    void put_infor();
    void put_id();
    void put_name();
    void put_sex();
    void put_apart();
    void put_work();
    void put_work_start_time();
    void put_tel();
private:
    string id;
    string name;
    string sex;
    string apart;
    string work;
    string work_start_time;
    string tel;
};

#endif

