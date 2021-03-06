#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>


#ifndef HASHCLASS_HPP
#define HASHCLASS_HPP
//#define HASH_H

class hashClass{

    private:
        static const int TableSize = 10;
        std::string priv_key = "kjfgkejgniebg"; 

        struct Key_Value{
            std::string key;
            std::map<std::string, std::string> mp;
            Key_Value* next;
        };

        Key_Value* store[TableSize];
 
    public:

        hashClass();
        void ReadDB(std::ifstream&);
        void WriteDB(std::ofstream&);
        int Hash(std::string key);
        void SetValue(std::string key, std::string data);
        int findTableSize();
        int NumberOfItems(int index);
        void PrintTable();
        bool PrintBucket(std::string key);
        std::map<std::string, std::string> *GetValue(std::string key);
        void DeleteValue(std::string key);
        void UpdateValue(std::string key, std::string data);
};

#endif