// Atlassian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <mutex>
#include <thread>
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <queue>
#include <list>


using namespace std;



//The total size of all files stored;and

//The top N collections(by file size) where N can be a user - defined value
class File
{
private:
    int size;
    string name;
    vector<string> collections;

public:
    File(int size, string name, vector<string> collections)
    {
        this->size = size;
        this->name = name;
        this->collections = collections;
    }

    string getFileName()
    {
        return this->name;
    }

    int getFileSzie()
    {
        return this->size;
    }

    vector<string> getCollections()
    {
        return this->collections;
    }
};

//file1.txt(size: 100)
//file2.txt(size: 200) in collection "collection1"
//file3.txt(size: 200) in collection "collection1"
//file4.txt(size: 300) in collection "collection2"
//file5.txt(size: 10)
vector<pair<string, int>> getTopNCollections(vector<File*> files, int& totalFileSize)
{
    unordered_map<string, int> collectionsSizeMap;
    for (auto file : files)
    {
        totalFileSize += file->getFileSzie();
        for (auto collection : file->getCollections())
        {
            collectionsSizeMap[collection] += file->getFileSzie();
        }
    }

    vector<pair<string, int>> collectionsSizeVector;
    for (auto x : collectionsSizeMap)
    {
        collectionsSizeVector.push_back(make_pair(x.first, x.second));
    }

    sort(collectionsSizeVector.begin(), collectionsSizeVector.end(),
        [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second > b.second;
        });

    return collectionsSizeVector;
}

void printTopNCollections(vector<pair<string, int>> collectionsSizeVector, int totalFileSize, int N)
{
    int count = 0;
    for (auto x : collectionsSizeVector)
    {
        count++;
        cout << x.first << " " << x.second << endl;
        if (count == N)break;
    }

    cout << "Total size " << totalFileSize << endl;
}

void ExecuteTestCase(vector<File*> files)
{
    int totalFileSize = 0;
    int N = 3;
    vector<pair<string, int>> collectionsSizeVector =
        getTopNCollections(files, totalFileSize);
    printTopNCollections(collectionsSizeVector, totalFileSize, N);
}
unordered_map<string, string> m
m["collection2"] = "collection1";
int main()
{
    File* file1 = new File(100, "File1", vector<string>{});
    File* file2 = new File(200, "File2", vector<string>{"collection1", "collection2"});
    File* file3 = new File(200, "File3", vector<string>{"collection1"});
    File* file4 = new File(400, "File4", vector<string>{"collection2"});
    File* file5 = new File(10, "File5", vector<string>{});

    vector<File*> files;

    files.push_back(file1);
    files.push_back(file2);
    files.push_back(file3);
    files.push_back(file4);
    files.push_back(file5);

    ExecuteTestCase(files);
}
