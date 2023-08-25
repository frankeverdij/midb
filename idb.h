#pragma once

#include <string>
#include <vector>

class subProductFile
{
    private:
        std::string fileName;  //subproduct file name
        char type;
        int mode;
        std::string user;
        std::String group;
        size_t compressedSize;
        std::string postOp;    // sh command to perform after installation of the package
        std::string exitOp;    // sh command to perform after installation on exit of inst
        std::string config;    // config mode update, noupdate, suggest
        size_t size;           // original size
        int cksum;
        int f;
        std::string symval;    // symbolic link
        int offset;            // offset in subproduct file 
};

class subProduct
{
    private:
        std::string name;  //subproduct name
        std::vector<subProductFile&> files;
};

class Idb
{
    private:
        std::string name;  // product name
        int nfiles;        // number of files
        std::vector<subProduct&> subprods;  // subproduct pointers
};
