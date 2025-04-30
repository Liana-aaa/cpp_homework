#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Shareholder {
    int employer_id;
    int share_percent;
};

class Organizations {
public:
    char name[50];
    char address[50];
    Date founded_date;
    char founder[50];
    int employees;
    char contact_info[1000];
    char laws[1000];
    char tax_id[50];
    char registration_number[50];
    virtual char* get_legal_structure() {
        return "Organization";
    }
};

class Fund : public Organizations {
public:
    char fund_type[50];
    char fund_manager[50];
    char fund_strategy[50];
    char fund_size[50];
    char fund_investors[1000];
    char* get_legal_structure() override {
        return "Fund";
    }
};

class LLC : public Organizations {
public:
    char type_of_business[100];
    Shareholder[100] employers_and_shares;
    char* get_legal_structure() override {
        return "LLC";
    }
};

class NGO : public Organizations {
public:
    char mission[1000];
    char projects[1000];
    char beneficiaries[1000];
    char* get_legal_structure() override {
        return "NGO";
    }
};

class CJSC : public Organizations {
public:
    char type_of_business[100];
    Shareholder[49] employers_and_shares;
    char* get_legal_structure() override {
        return "CJSC";
    }
};